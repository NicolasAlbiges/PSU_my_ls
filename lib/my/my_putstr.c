/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** show my string
*/

void	my_putchar(char c);

int	my_putstr(char const *str, int len)
{
	int a = 0;

	while (a != len && len != 0) {
		my_putchar(str[a]);
		a = a + 1;
	}
	return (0);
}
