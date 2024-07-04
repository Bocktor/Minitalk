/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:05:02 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/19 18:47:23 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/mnt/nfs/homes/jbocktor/!student/minitalk/libft/includes/ft_printf.h"
#include "libft/includes/libft.h"

void	handle_signal(int signal)
{
	static unsigned char	s_u_c;
	static int				octet;

	s_u_c |= (signal == SIGUSR1);
	octet++;
	if (octet == 8)
	{
		ft_printf("%c", s_u_c);
		octet = 0;
		s_u_c = 0;
	}
	else
		s_u_c <<= 1;
}

int	main(void)
{
	ft_printf("/* **************************************");
	ft_printf("************************************ */\n");
	ft_printf("/*                                       ");
	ft_printf("                 :::      ::::::::   */\n");
	ft_printf("/*                 Student : jbocktor    ");
	ft_printf("               :+:      :+:    :+:   */\n");
	ft_printf("/*                                       ");
	ft_printf("             +:++:+        +:+       */\n");
	ft_printf("/*                   PID   : %d     ", getpid());
	ft_printf("           +#+  +:+      +#+         */\n");
	ft_printf("/*                                       ");
	ft_printf("         +#+#+#+#+#+  +#+            */\n");
	ft_printf("/*                                       ");
	ft_printf("              ###   ########.fr      */\n");
	ft_printf("/* **************************************");
	ft_printf("************************************ */\n\n\n");
	signal(SIGUSR2, handle_signal);
	signal(SIGUSR1, handle_signal);
	while (1)
		pause();
	return (0);
}
