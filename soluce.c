/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soluce.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbloesch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 10:49:24 by gbloesch          #+#    #+#             */
/*   Updated: 2020/08/30 20:48:47 by srazack-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "dict_lib.h"

void	ft_millier(char *str, int mod, int count, struct key_value *dict)
{
	int m;
	char unit[1];

	m = 0;
	if (mod < 1)
	{
		if (str[count] != '0')
		{
			unit[0] = str[count];
			ft_putstr(value(dict, unit));
			ft_putstr(value(dict, "100"));
		}
	}
	m = 0;
	count++;
	if (mod < 2)
	{
		if (str[count] != '0')
		if (str[count] != '1')
		{
			unit[0] = str[count];
			ft_putstr(value(dict, unit));
		}
		if (str[count] == '1')
		{
			m = 10 + (str[count++])
			ft_putchar(dict[m][w])
				return (0);
		}
	}
	if (mod < 3)
	{
		if (str[count] != '0')
		{
			while (str[count] != dict[m])
			{
				m++;
			}
			ft_putchar(dict[m][w])
		}
	}
}
void	ft_soluce(char *str, struct key_value *dict)
{
	int i;
	int count;
	int mod;

	count = 0;
	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	mod = i % 3;
	if (i > 39)
		write(1, "Error \n", 7);
	    if (i > 36)
        ft_millier(str, mod, count)
        ft_putchar(value(dict, "1000000000000000000000000000000000000"));
        count += 3;
		if (i > 33)
        ft_millier(str, mod, count)
        ft_putchar(value(dict, "1000000000000000000000000000000000"));
        count += 3;
		if (i > 30)
        ft_millier(str, mod, count)
        ft_putchar(value(dict, "1000000000000000000000000000000"));
        count += 3;
		if (i > 27) /*fin de la fonction apres decoupage*/
        ft_millier(str, mod, count)
        ft_putchar(value(dict, "1000000000000000000000000000"));
        count += 3;
		if (i > 24)
        ft_millier(str, mod, count)
        ft_putchar(value(dict, "1000000000000000000000000"));
        count += 3;
		if (i > 21)
        ft_millier(str, mod, count)
        ft_putchar(value(dict, "1000000000000000000000"));
        count += 3;
		if (i > 18)
        ft_millier(str, mod, count)
        ft_putchar(value(dict, "1000000000000000000"));
        count += 3;
		if (i > 15)
        ft_millier(str, mod, count)
        ft_putchar(value(dict, "1000000000000000"));
        count += 3;
		if (i > 12)
        ft_millier(str, mod, count)
        ft_putchar(value(dict, "100000000000"));
        count += 3;
		if (i > 9)
        ft_millier(str, mod, count)
        ft_putchar(value(dict, "1000000000"));
        count += 3;
		if (i > 6)
        ft_millier(str, mod, count)
        ft_putchar(value(dict, "1000000"));
        count += 3;
		if (i > 3)
        ft_millier(str, mod, count)
        ft_putchar(value(dict, "1000"));
        count += 3;
		if (i > 0)
        ft_millier fin(str, mod, count)
}
