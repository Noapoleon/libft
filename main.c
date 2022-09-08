#include "libft.h"
#include <stdio.h>

int main(int ac, char **av)
{
	(void)ac;
	(void)av;

	char *s1;
	s1 = ft_strchr(av[1], av[2][0]);
	printf("%s\n", s1);
	return (0);
}
