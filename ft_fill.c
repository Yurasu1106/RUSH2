/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srazack- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 21:09:57 by srazack-          #+#    #+#             */
/*   Updated: 2020/08/30 21:22:48 by srazack-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "dict_lib.h"

void fill_0(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		str[i] = '0';
		i++;
	}
}

void revert(char *str)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(str);

	while(i < j)
	{
		str[i] = str[i + 1];
		i++;
	}
	str[i] = '\0';
}

	
