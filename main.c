#include "libft.h"
#include <stdio.h>

int main(int ac, char **av)
{
	(void)ac;
	(void)av;

	int x;
	char *s1;

	fprintf(stderr, "av[1] --------> %s\n", av[1]);
	x = ft_atoi(av[1]);
	fprintf(stderr, "ft_atoi ------> %d\n", x);
	s1 = ft_itoa(x);
	fprintf(stderr, "ft_itoa ------> %s\n", s1);

	ft_putstr_fd("ft_putnbr_fd -> ", 2);
	ft_putnbr_fd(x, 2);
	ft_putchar_fd('\n', 2);
	return (0);
}
