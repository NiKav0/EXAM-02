#include <unistd.h>

void	put_nbr(int nb)
{
	char digit;

	if (nb >= 10)
		put_nbr(nb / 10);
	digit = nb % 10 + '0';
	write(1, &digit, 1);
}

int	main(int ac, char **av)
{
	(void)av;

	put_nbr(ac - 1);
	write(1, "\n", 1);
	return 0;
}
