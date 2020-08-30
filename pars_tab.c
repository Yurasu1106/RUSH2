/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srazack- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 17:52:11 by srazack-          #+#    #+#             */
/*   Updated: 2020/08/30 19:49:54 by srazack-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "dict_lib.h"

char *value(struct key_value *tab, char *str)
{
	int x;
	
	x = 0;

	while (ft_strcmp(tab[x].key, str) != 0)
		x++;
	
	return tab[x].value;
}
