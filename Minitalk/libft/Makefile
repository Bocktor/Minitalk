# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/09 12:52:14 by jbocktor          #+#    #+#              #
#    Updated: 2024/01/19 21:03:50 by jbocktor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc -Wall -Wextra -Werror -g3

FLAGS = -Wall -Wextra -Werror -g3

NAME = libft.a

SRC =	\
first_project/ft_alloc/ft_bzero.c\
first_project/ft_alloc/ft_calloc.c\
first_project/ft_atoi/ft_atoi.c\
first_project/ft_atoi/ft_itoa.c\
first_project/ft_is/ft_isalpha.c\
first_project/ft_is/ft_isalnum.c\
first_project/ft_is/ft_isascii.c\
first_project/ft_is/ft_isdigit.c\
first_project/ft_is/ft_isprint.c\
first_project/ft_mem/ft_memchr.c\
first_project/ft_mem/ft_memcmp.c\
first_project/ft_mem/ft_memcpy.c\
first_project/ft_mem/ft_memmove.c\
first_project/ft_mem/ft_memset.c\
first_project/ft_put/ft_putchar_fd.c\
first_project/ft_put/ft_putendl_fd.c\
first_project/ft_put/ft_putnbr_fd.c\
first_project/ft_put/ft_putstr_fd.c\
first_project/ft_put/ft_unsigned_putnbr_fd.c\
first_project/ft_split/ft_split.c\
first_project/ft_str/ft_strchr.c\
first_project/ft_str/ft_strdup.c\
first_project/ft_str/ft_striteri.c\
first_project/ft_str/ft_strjoin.c\
first_project/ft_str/ft_strlcat.c\
first_project/ft_str/ft_strlcpy.c\
first_project/ft_str/ft_strlen.c\
first_project/ft_str/ft_strmapi.c\
first_project/ft_str/ft_strncmp.c\
first_project/ft_str/ft_strnstr.c\
first_project/ft_str/ft_strrchr.c\
first_project/ft_str/ft_strtrim.c\
first_project/ft_str/ft_substr.c\
first_project/ft_to/ft_tolower.c\
first_project/ft_to/ft_toupper.c\
first_project/ft_lst/ft_lstadd_back.c\
first_project/ft_lst/ft_lstadd_front.c\
first_project/ft_lst/ft_lstclear.c\
first_project/ft_lst/ft_lstdelone.c\
first_project/ft_lst/ft_lstiter.c\
first_project/ft_lst/ft_lstlast.c\
first_project/ft_lst/ft_lstmap.c\
first_project/ft_lst/ft_lstnew.c\
first_project/ft_lst/ft_lstsize.c\
\
ft_printf/ft_format/ft_format_c.c\
ft_printf/ft_format/ft_format_d_i.c\
ft_printf/ft_format/ft_format_lower_x.c\
ft_printf/ft_format/ft_format_p.c\
ft_printf/ft_format/ft_format_s.c\
ft_printf/ft_format/ft_format_u.c\
ft_printf/ft_format/ft_format_upper_x.c\
ft_printf/ft_hexa/ft_hexadecilen.c\
ft_printf/ft_hexa/ft_hexadecimal.c\
ft_printf/ft_count/ft_countnbr.c\
ft_printf/ft_count/ft_unsigned_countnbr.c\
ft_printf/ft_printf.c\
ft_printf/ft_reverse.c\
ft_printf/ft_lst_printf.c\
\
get_next_line/get_next_line_utils.c\
get_next_line/get_next_line.c\

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean: 
	rm -f ./*/*.o
	rm -f ./*/*/*.o
fclean: clean
	rm -f $(NAME)
	

re: fclean all

.PHONY: all clean fclean re
