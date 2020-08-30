/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srazack- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 18:21:21 by srazack-          #+#    #+#             */
/*   Updated: 2020/08/30 18:27:29 by srazack-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "dict_lib.h"
#include <stdio.h>

int get_adress(char c, char *str, int i, int j, struct key_value *tab)
{
	int x;

	x = 0;
	if (c == 'k')
	{
		while(str[i] >= '0' && str[i] <= '9')
		{   /*printf("%d", x);
			printf("%c", ' ');
			printf("%d", i);
			printf("%c", ' ');*/
			tab[j].key[x] = str[i];
			i++;
			x++;
		}
		/*printf("%c", '\n');
		write(1, "b", 1);*/
		tab[j].key[x] = '\0';
		return (i);
	}
	if (c == 'v')
	{
		while((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			/*printf("%d", x);
			printf("%c", ' ');
			printf("%d", i);
			printf("%c", ' ');*/
			tab[j].value[x] = str[i];
			i++;
			x++;
		}
		/*printf("%c", '\n');*/
		tab[j].value[x] = '\0';
		return (i - 1);
	}

	return (i);
}

struct key_value *mk_dict(char *str)
{
	struct key_value *dict;
	int i;
	int j;
	int y;

	i = 0;
	j = 0;
	y = 0;
	while (str[i])
	{
		if(str[i] == '\n')
			j++;
			i++;
	}
	str[i + 1] = '\0';
	dict = (struct key_value *)malloc(j * (sizeof(struct key_value)));
	i = 0;
	while ( y < j)
	{
		while (str[i] != '\n')
		{
			if(str[i] >= '0' && str[i] <= '9')
				i = get_adress('k', str, i, y, dict);
			if((str[i] >= 'a'&& str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
				i = get_adress('v', str, i, y, dict);
			i++;
		}
		y++;
		i++;
	}
	return (dict);
}

void aff_dict(struct key_value *tab)
{
	int i;

	i = 0;
	while(i < 41)
	{
		printf("%s", tab[i].key);
		printf("%c", ' ');
		printf("%s", tab[i].value);
		printf("%c", '\n');
		i++;
	}
	
}
