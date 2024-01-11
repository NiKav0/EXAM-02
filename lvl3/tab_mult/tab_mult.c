#include <unistd.h>

int	ft_atoi(char *str)
{
	int res = 0;

	while (*str)
		res = res * 10 + *str++ - '0';
	return res;
}

void	put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n /10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}

int	main(int ac, char **av)
{
	int i;

	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		int nb = ft_atoi(av[1]);
		while (i <= 9)
		{
			put_nbr(i);
			write(1, " x ", 3);
			put_nbr(nb);
			write(1, " = ", 3);
			put_nbr(i * nb);
			write(1, "\n", 1);
			i++;
		}
	}
	return 0;
}
