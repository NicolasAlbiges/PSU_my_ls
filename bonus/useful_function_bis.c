/*
** EPITECH PROJECT, 2017
** useful_function_bis.c
** File description:
** usefull func for the l flag
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/sysmacros.h>
#include <unistd.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"
#include <time.h>
#include <pwd.h>
#include <grp.h>

int	conditional_func(char *str)
{
	struct stat buf;
	DIR* dos;

	if (lstat(str, &buf) != -1 && (dos = opendir(str)) == NULL)
		return (1);
	if (str[0] == '-')
		return (1);
	if (lstat(str, &buf) == -1)
		return (1);
	return (0);
}

int	conditional_jump_func(char *str, int ct)
{
	return (0);
}

int	counting(int ac, char **av, int b)
{
	int ct = 1;

	if (b == 1)
		my_printf("\n");
	b = 0;
	while (ct < ac) {
		if (av[ct][0] != '-')
			b ++;
		ct ++;
	}
	return (b);
}
