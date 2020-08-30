# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srazack- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/29 13:30:50 by srazack-          #+#    #+#              #
#    Updated: 2020/08/30 23:40:55 by srazack-         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

f_clean:


	gcc -o  dict_lib.h ft_strcmp.c make_dict.c solve.c  ft_fill.c ft_strlen.c ft_putstr.c main.c pars_tab.c

