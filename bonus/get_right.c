/*
** EPITECH PROJECT, 2017
** get_right.c
** File description:
** the right a file
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

int	get_right_x(struct stat buf, unsigned int macro)
{
	if((buf.st_mode & macro) != 0)
		my_printf("x");
	else
		my_printf("-");
	return (0);
}

int	get_right_r(struct stat buf, unsigned int macro)
{
	if((buf.st_mode & macro) != 0)
		my_printf("r");
	else
		my_printf("-");
	return (0);
}

int	get_right_w(struct stat buf, unsigned int macro)
{
	if((buf.st_mode & macro) != 0)
		my_printf("w");
	else
		my_printf("-");
	return (0);
}

int	type_file(struct stat buf)
{
	if ((buf.st_mode & S_IFMT) == S_IFCHR)
		my_printf("c");
	if ((buf.st_mode & S_IFMT) == S_IFBLK)
		my_printf("b");
	return (0);
}

int	get_right_user_one(struct stat buf)
{
	if ((buf.st_mode & S_IFMT) == S_IFDIR)
		my_printf("d");
	if ((buf.st_mode & S_IFMT) == S_IFLNK)
		my_printf("l");
	type_file(buf);
	if ((buf.st_mode & S_IFMT) == S_IFREG)
		my_printf("-");
	get_right_r(buf, S_IRUSR);
	get_right_w(buf, S_IWUSR);
	get_right_x(buf, S_IXUSR);
	get_right_r(buf, S_IRGRP);
	get_right_w(buf, S_IWGRP);
	get_right_x(buf, S_IXGRP);
	get_right_r(buf, S_IROTH);
	get_right_w(buf, S_IWOTH);
	get_right_x(buf, S_IXOTH);
	my_printf(" ");
	return (0);
}
