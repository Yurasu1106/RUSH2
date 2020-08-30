/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srazack- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 20:52:38 by srazack-          #+#    #+#             */
/*   Updated: 2020/08/30 23:36:28 by srazack-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "dict_lib.h"
#include <stdio.h>

void	display_r(char *str)
{
	ft_putstr(str);
	ft_putchar(' ');
}

int		exception(struct key_value *dict, char *str)
{
	char test[2];
	int i;

	test[0] = '1';
	test[1] = '1';
	while(i < 9)
	{
		test[1] = test[1] + 1;
		i++;
		if(ft_strcmp(test, str) == 0)
			return 1;
	}
	return (0);
}
void	solve(struct key_value *dict, char *str)
{
	char	deci[2];
	char	temp[36];
	int		p = ft_strlen(str);

	temp[ft_strlen(str)] = '\0';
	deci[1] = '\0';
	temp[0] = str[0];
	fill_0(temp);
	if (str[0] != '0'&& p > 3)
	{
		if(str[0] != 1)
		{
			deci[0] = str[0];
			display_r(value(dict, deci));
		}
		temp[0] = '1';
		display_r(value(dict, temp));
		revert(str);
	}
	if (str[0] != '0')
	{
		if(exception(dict, str) == 1)
		{
			ft_putstr(value(dict, str));
			return ;
		}
		temp[ft_strlen(str)] = '\0';
		fill_0(temp);
		temp[0] = str[0];
		display_r(value(dict, temp));
	}
	deci[0] = str[1];
	if(deci[0] == 0 || p == 1)
		ft_putstr(value(dict, deci));
}

void	resolve(struct key_value *dict, char *str)
{
	int i;
	char **tab;
	int size;
	
	if (ft_strlen(str) <= 3)
	   solve(dict, str);
	else
		ft_putstr("Error /Gaspard Parsing");
}

