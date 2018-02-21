/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h
*/

#include<stdlib.h>

#ifndef MY_H

#define MY_H

typedef struct s_list
{
	char *str;
	struct s_list *nxt;
}s_list_t;

typedef struct spec
{
	char spec_pf;
	int (*spec_p)(va_list ap, int ct, char *str, char *str_temp);
}spec_t;

typedef struct length
{
	char *sep_pf;
	int (*sep_p)(va_list ap, int ct, char *str, char *str_temp);
}length_t;

typedef struct flag
{
	char flag_pf;
	int (*flag_p)(char *str, int ctp, long long temp, char *str_temp);
}flag_t;

typedef struct flag_char
{
	char flag_c_pf;
	int (*flag_c_p)(char *str, int ctp, char *temp, char *str_temp);
}flag_char_t;

int	my_getnbr(char *str);
int	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_putstr(char *str, int len);
char	*my_revstr(char *str);
char	*my_strcat(char *dest, char *src);
int	my_strcmp(char *s1, char *s2);
char	*my_strdup(char *src);
int	my_strlen(char *str);
char	*my_strncat(char *dest, char *src, int n);
int	my_strncmp(char *s1, char *s2, int n);
char	*my_strcpy(char *dest, char const *src);
char	*my_strncpy(char *dest, char *src, int n);
char	*my_strstr(char *str, char *to_find);
void	my_swap(int *a, int *b);
char	*swap_output(char *base, int nb);
long long	my_put_long_long(long long nb);
void	my_put_unsg_ll(unsigned long long nb);
int	my_long_long_len(long long nb);
int	flag_x(va_list ap, int ct, char *str, char *str_temp);
int	flag_xx(va_list ap, int ct, char *str, char *str_temp);
int	flag_o(va_list ap, int ct, char *str, char *str_temp);
int	flag_long(va_list ap, int ct, char *str, char *str_temp);
int	flag_h_nbr(va_list ap, int ct, char *str, char *str_temp);
int	flag_long_long(va_list ap, int ct, char *str, char *str_temp);
int	flag_unsg_short(va_list ap, int ct, char *str, char *str_temp);
int	flag_unsg_l(va_list ap, int ct, char *str, char *str_temp);
int	flag_unsg_ll(va_list ap, int ct, char *str, char *str_temp);
int	flag_p(va_list ap, int ct, char *str, char *str_temp);
int	flag_s(va_list ap, int ct, char *str, char *str_temp);
int	flag_c(va_list ap, int ct, char *str, char *str_temp);
int	flag_b(va_list ap, int ct, char *str, char *str_temp);
int	flag_ll_x(va_list ap, int ct, char *str, char *str_temp);
int	flag_ll_xx(va_list ap, int ct, char *str, char *str_temp);
int	flag_ll_o(va_list ap, int ct, char *str, char *str_temp);
int	flag_ll_b(va_list ap, int ct, char *str, char *str_temp);
int	flag_plus(char *str_temp, long long rst, int b, int nbr);
int	flag_plus_bis(char *str_temp, long long rst, int b);
int	nbr_disp(int temp_len, char *str_temp, int nbr, int b);
int	nbr_disp_bis(int temp_len, char *str_temp, int nbr_f, int b);
int	nbr_disp_bis(int temp_len, char *str_temp, int nbr_f, int b);
int	nbr_disp_thd(long long rst, int temp_len, int len_f);
void	base(unsigned long long nbr, char *str);
void	separator_flag(char *str, va_list ap, int ct, char *str_temp);
int	choise_flag(char *str, int ct, int b);
char	*copy_flag(char *str, char *temp, int ct);
char	*copy_str(char *str, char *str_temp, int ct);
void	my_printf(char *str, ...);
int	len_flag(char *str, int ct);
void	flag_sign(long long rst);
int	flag_flag(char *str, int ct);
int	choise_flag_flag(char *str, int ctp, long long temp, char *str_temp);
int	choise_flg_flg_c(char *str, int ctp, char* temp, char *str_temp);
void	flag_nbr_disp(int nbr, int len_f);
int	flag_nbr(char *str, char *str_temp, int ctp, int temp);
void	flag_zero_disp(int nbr, int len_f);
int	flag_long_long_d(va_list ap, int ct, char *str, char *str_temp);
int	flag_hh_x(va_list ap, int ct, char *str, char *str_temp);
int	flag_hh_xx(va_list ap, int ct, char *str, char *str_temp);
int	flag_hh_o(va_list ap, int ct, char *str, char *str_temp);
int	flag_hh_b(va_list ap, int ct, char *str, char *str_temp);
int	flag_hh_u(va_list ap, int ct, char *str, char *str_temp);
int	flag_ss(va_list ap, int ct, char *str, char *str_temp);
int	flag_hh_d(va_list ap, int ct, char *str, char *str_temp);
void	flag_has_o(char *str_temp);
void	flag_has_x(char *str_temp);
void	flag_has_xx(char *str_temp);
int	fill_head_end(s_list_t **firstA, char *str);
int	fill_head_top(s_list_t **firstA, int nbra);
int	push_a(s_list_t **firstA, s_list_t **firstB);
int	push_b(s_list_t **firstA, s_list_t **firstB);
int	rm_first(s_list_t **firstA);
int	rm_end(s_list_t **firstA);
int	rotate_a(s_list_t **firstA);
int	rotate_b(s_list_t **firstB);
int	rotate_r(s_list_t **firstA, s_list_t **firstB);
int	rotate_r_a(s_list_t **firstA);
int	rotate_r_b(s_list_t **firstB);
int	rotate_r_r(s_list_t **firstA, s_list_t **firstB);
int	fill_list(s_list_t **firstA, char *str);
int	swap_a(s_list_t **firstA);
int	swap_b(s_list_t **firstA);
int	swap_c(s_list_t **firstA, s_list_t **firstB);
int	sort_four(s_list_t **firstA, s_list_t **firstB);
int	sort_three(s_list_t **firstA, s_list_t **firstB);
int	sort_two(s_list_t **firstA, s_list_t **firstB);
int	sort_nbr(s_list_t **firstA, s_list_t **firstB);
int	space_or_n(s_list_t **firstB);
int	my_sortnbr(char *str);
int	my_error_nbr(char *str);
int	disp_file(char *str);
int	get_right_user_one(struct stat buf);
int	type_file(struct stat buf);
int	get_right_w(struct stat buf, unsigned int macro);
int	get_right_r(struct stat buf, unsigned int macro);
int	get_right_x(struct stat buf, unsigned int macro);
int	disp_time(char *str);
int	get_info_user(struct stat buf);
int	disp_file(char *str);
int	error(int ac, char **av);
int	good_flag(char *str);
int	flag_disp(int ac, char **av);
int	directory_file(int ac, char **av);
int	directory(DIR* dos, struct dirent* file);
int	whithout_flag(int ac, char **av);
int	space(int b);
int	enter(int b, char *str, int bou, int ac);
int	empty(char **av, int ct);
int	disp_info_file(char *str);
int	disp_info_file_dir(char *str);
int	disp_info(int ac, char **av, int b);
int	with_l_flag(int ac, char **av, int b);
void	l_flag(int ac, char **av, int b);
int	conditional_func(char *str);
int	conditional_jump_func(char *str, int ct);
int	counting(int ac, char **av, int b);

#endif
