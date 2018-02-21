/*
** EPITECH PROJECT, 2017
** flag_flag.c
** File description:
** flag_flag for printf
*/

#include "my.h"

/*flag_t const tab_flg[] = {{'.', flag_dot}};

flag_char_t const tab_f_c[] = {{'.', flag_char_dot}};

int	flag_dot(char *str, int ct, long long temp, char *str_temp)
{
	long long nbr = 0;
	(void)str;
	(void)temp;

	ct ++;
	while (str_temp[ct] >= 48 && str_temp[ct] <= 57) {
		nbr = nbr * 10;
		nbr = nbr + (str_temp[ct] - 48);
		ct ++;
	}
	return (nbr);
}

int	choise_flag_flag(char *str, int ctp, long long temp, char *str_temp)
{
	int ctb = 0;

	while (ctb < 1) {
		if(str_temp[ctp] == tab_flg[ctb].flag_pf) {
			ctp = (tab_flg[ctb].flag_p)(str, ctp, temp, str_temp);
			return (ctp);
		}
		ctb ++;
	}
	return (0);
}

int	flag_char_dot(char *str, int ct, char *temp, char *str_temp)
{
	long long nbr = 0;
	(void)str;
	(void)temp;

	ct ++;
	while (str_temp[ct] >= 48 && str_temp[ct] <= 57) {
		nbr = nbr + (str_temp[ct] - 48);
		ct ++;
	}
	return (nbr);
}


int	choise_flg_flg_c(char *str, int ctp, char* temp, char *str_temp)
{
	int ctb = 0;

	while (ctb < 1) {
		if(str_temp[ctp] == tab_f_c[ctb].flag_c_pf) {
			ctp = (tab_f_c[ctb].flag_c_p)(str, ctp, temp, str_temp);
			return (ctp);
		}
		ctb ++;
	}
	ctp = my_strlen(temp);
	return (ctp);
	}*/
