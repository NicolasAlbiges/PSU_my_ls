/*
** EPITECH PROJECT, 2017
** my_ls_boot.c
** File description:
** first use of my_ls
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

int	choise_flag_ls(int ac, char **av)
{
	int ct = 0;
	int b = 0;
	DIR* dos;
	struct dirent* file = NULL;

	while (ct < ac) {
		if (av[ct][0] == '-' && av[ct][1] == 'l')
			b = 1;
		ct ++;
	}
	if (ac == 1) {
		dos = opendir(".");
		directory(dos, file);
		b = 2;
	}
	return (b);
}

int	main(int ac, char **av)
{
	error(ac, av);
	if (choise_flag_ls(ac, av) == 1)
		l_flag(ac, av, 0);
	if (choise_flag_ls(ac, av) == 2)
		return (0);
	else
		whithout_flag(ac, av);
}
