/*
** EPITECH PROJECT, 2017
** info_file.c
** File description:
** info of a file
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

int	disp_time(char *str)
{
	int ct = 3;
	while (ct != 16) {
		my_printf("%c", str[ct]);
		ct ++;
	}
	return (0);
}

int	get_info_user(struct stat buf)
{
	struct passwd *pwd = getpwuid(buf.st_uid);
	struct group  *grp = getgrgid(buf.st_gid);

	my_printf(" %s", pwd->pw_name);
	my_printf(" %s", grp->gr_name);
	return (0);
}

int	disp_file(char *str)
{
	struct stat buf;

	lstat(str, &buf);
	get_right_user_one(buf);
	my_printf("%ld", buf.st_nlink);
	get_info_user(buf);
	my_printf(" %ld", buf.st_size);
	disp_time(ctime(&buf.st_mtime));
	return (0);
}
