#include <unistd.h>

int	ft_atoi(char *str)
{
	int res = 0;
	while (*str)
		res = res * 10 + *str++ - '0';
	return (res);
}

void	put_nbr(int num)
{
	if (num >= 10)
		put_nbr(num / 10);
	char digit = num % 10 + '0';
	write(1, &digit, 1);
}

int	is_prime(int nb)
{
	int i = 2;

	if (nb <= 1)
		return 0;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int nb = ft_atoi(av[1]);
		int res = 0;

		while (nb > 0)
		{
			if (is_prime(nb))
				res += nb;
			nb--;
		}
		put_nbr(res);
	}
	write(1, "\n", 1);
	return 0;
}
