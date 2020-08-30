/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srazack- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 14:56:40 by srazack-          #+#    #+#             */
/*   Updated: 2020/08/30 23:43:49 by srazack-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "dict_lib.h"
#include <stdio.h>

int main(int nb, char **arg)
{
	int f;
	char str[10000];
	int ret;
	struct key_value *dictio;

	f = open("number.dict", O_RDONLY);
 	ret = read(f, str, 10000);
	dictio = mk_dict(str);
	/*printf("%s", value(dictio, "0"));*/
	resolve(dictio, arg[1]);



	return 0 ;
}

