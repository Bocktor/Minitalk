/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:27:20 by jbocktor          #+#    #+#             */
/*   Updated: 2024/02/14 11:37:25 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/mnt/nfs/homes/jbocktor/!student/minitalk/libft/includes/ft_printf.h"
#include "libft/includes/libft.h"

int	send_every_octet_signal(int pid, unsigned char character)
{
	int				i;
	unsigned char	c;
	int				error;

	i = 8;
	c = character;
	while (i-- > 0)
	{
		c = character >> i;
		if (c % 2 == 0)
			error = kill(pid, SIGUSR2);
		else
			error = kill(pid, SIGUSR1);
		usleep(400);
	}
	return (error);
}

int	main(int argc, char **argv)
{
	int		i;
	int		pid;
	int		error;
	char	*send_str;

	if (argc != 3)
	{
		ft_printf("ALL PARAMETERS ARE NOT CORRECTLY TYPED");
		return (0);
	}
	pid = ft_atoi(argv[1]);
	send_str = argv[2];
	i = 0;
	while (send_str[i])
	{
		error = send_every_octet_signal(pid, (unsigned char)send_str[i]);
		if (error == -1)
		{
			ft_printf("PID ERROR");
			return (0);
		}
		i++;
	}
	return (0);
}

/*error = send_every_octet_signal(pid,
		'\n');error = send_every_octet_signal(pid, '\n');*/
