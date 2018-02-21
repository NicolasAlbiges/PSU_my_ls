/*
** EPITECH PROJECT, 2017
** useful_function.c
** File description:
** useful function for the program
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

int	space(int b)
{
	if (b > 0)
		my_printf(" ");
	return (0);
}

int	enter(int b, char *str, int bou, int ac)
{
	if (b == 1 && bou > 0)
		my_printf("\n");
	if (b == 2 && ac > 2)
		my_printf("%s:\n", str);
	return (0);
}
