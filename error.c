/*
** EPITECH PROJECT, 2017
** error.c
** File description:
** error of the ls
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

int	good_flag(char *str)
{
	int ct = 1;

	while (str[ct] != '\0') {
		if (str[ct] != 'R' && str[ct] != 'l'
		&& str[ct] != 't'&& str[ct] != 'r'
		&& str[ct] != 'd') {
			my_printf("ls : option invalide -- ");
			my_printf("'%c'\n", str[ct]);
			my_printf("Saisissez « ls --help » ");
			my_printf("pour plus d'informations.\n");
			exit (84);
		}
		ct ++;
	}
	return (0);
}

int	flag_disp(int ac, char **av)
{
	int ct = 1;

	while (ct < ac) {
		if (av[ct][0] == '-' && av[ct][1] != '\0')
			good_flag(av[ct]);
		ct ++;
	}
	return (0);

}

int	error(int ac, char **av)
{
	int ct = 1;
	struct stat buf;
	int b = 0;

	flag_disp(ac, av);
	while (ct < ac) {
		if (av[ct][0] == '-' && av[ct][1] == '\0') {
			my_printf("ls: impossible d'accéder à '-': ");
			my_printf("Aucun fichier ou dossier de ce type\n");
			b ++;
		}
		if (lstat(av[ct], &buf) == -1 && b == 0 && av[ct][0] != '-') {
			my_printf("ls: impossible d'accéder à '%s': ", av[ct]);
			my_printf("Aucun fichier ou dossier de ce type\n");
		}
		b = 0;
		ct ++;
	}
	return (0);
}
