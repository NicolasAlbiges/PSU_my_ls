/*
** EPITECH PROJECT, 2017
** whithout_func.c
** File description:
** handeling whitout flag
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

int	directory_file(int ac, char **av)
{
	DIR* dos;
	struct stat buf;
	int ct = 1;
	int b = 0;
	int bou = 0;

	while (ct < ac) {
		if ((dos = opendir(av[ct])) == NULL
		&& lstat(av[ct], &buf) != -1) {
			space(bou);
			my_printf("%s", av[ct]);
			closedir(dos);
			bou ++;
			b = 1;
		} else
			b = 2;
		ct ++;
	}
	enter(1, av[0], bou, ac);
	return (b);
}

int	directory(DIR* dos, struct dirent* file)
{
	while ((file = readdir(dos)) != NULL) {
		if (file->d_name[0] != '.')
			my_printf("%s\n", file->d_name);
	}
	return (0);
}

int	whithout_flag(int ac, char **av)
{
	int temp;
	int ct = 0;
	DIR* dos;
	struct dirent* file = NULL;
	struct stat buf;

	temp = directory_file(ac, av);
	while (ct < ac) {
		if ((dos = opendir(av[ct])) != NULL) {
			enter(temp, av[ct], 0, ac);
			dos = opendir(av[ct]);
			directory(dos, file);
			closedir(dos);
		}
		ct ++;
		if (ct < ac && ct != 1 && lstat(av[ct], &buf) != -1)
			my_printf("\n");
	}
	return (0);
}
