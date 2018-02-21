/*
** EPITECH PROJECT, 2017
** l_flag.c
** File description:
** l flag
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

int	disp_info_file(char *str)
{
	DIR* dos = opendir(str);
	struct dirent* file = NULL;
	char *temp;

	while ((file = readdir(dos)) != NULL) {
		temp = my_strcat(str, file->d_name);
		if (conditional_jump_func(temp, my_strlen(str)) == 0) {
			disp_file(temp);
			my_printf(" %s\n", file->d_name);
		}

	}
	return (0);
}

int	disp_info_file_dir(char *str)
{
	DIR* dos = opendir(str);
	struct dirent* file = NULL;
	struct stat buff;
	long blocks = 0;
	char *temp;

	while ((file = readdir(dos)) != NULL) {
		temp = my_strcat(str, file->d_name);
		lstat(temp, &buff);
		if (conditional_jump_func(temp, my_strlen(str)) == 0)
			blocks = blocks + buff.st_blocks;
	}
	my_printf("total %ld\n", (blocks / 2));
	disp_info_file(str);
	return (0);
}

int	disp_info(int ac, char **av, int b)
{
	int ct = 1;

	while (ct < ac) {
		if (conditional_func(av[ct]) == 0) {
			enter(b, av[ct], ct, ac);
			disp_info_file_dir(av[ct]);
			b = 2;
		}
		ct ++;
		if (ct < ac && conditional_func(av[ct]) == 0 && b == 2
		&& conditional_func(av[ct - 1]) == 0)
			my_printf("\n");
	}
	return (0);
}

int	with_l_flag(int ac, char **av, int b)
{
	if (b == 0) {
		disp_info_file_dir(".");
		return (0);
	}
	if (b > 1)
		b = 2;
	if (b == 1)
		b = 3;
	disp_info(ac, av, b);
	return (0);
}

void	l_flag(int ac, char **av, int b)
{
	int bou = 0;
	int ct = 1;
	DIR* dos;
	struct stat buf;

	while (ct < ac) {
		if (lstat(av[ct], &buf) != -1
		&& (dos = opendir(av[ct])) == NULL) {
			disp_file(av[ct]);
			my_printf(" %s\n", av[ct]);
			b = 1;
		}
		if ((dos = opendir(av[ct])) != NULL) {
			bou ++;
		}
		ct ++;
	}
	if (b == 1 && bou == 0)
		return;
	b = counting(ac, av, b);
	with_l_flag(ac, av, b);
}
