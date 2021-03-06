/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_lib.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srazack- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 10:25:30 by srazack-          #+#    #+#             */
/*   Updated: 2020/09/01 11:00:16 by srazack-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_LIB
#define DICT_LIB

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


struct key_value{
	char key[100];
	char value[100];
};

void fill_0(char *str);
void revert(char *str);
void ft_putchar(char c);
void ft_putstr(char *str);
int ft_strcmp(char *s1, char *s2);
int ft_strlen(char *str);
int get_adress(char c, char *str, int i, int j, struct key_value *tab);
struct key_value *mk_dict(char *str);
void aff_dict(struct key_value *tab);
char *value(struct key_value *tab, char *str);
void display_r(char *str);
int exception(struct key_value *dict, char *str);
void solve(struct key_value *dict, char *str);
void resolve(struct key_value *dict, char *str);

#endif
