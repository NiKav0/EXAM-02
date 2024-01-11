#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int i = 0;

	while (str[i++])
	{
		while (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		while ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' ||
					str[i + 1] == '\0'))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
}

int	main(int ac, char **av)
{
	int i;
	if (ac < 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		rstr_capitalizer(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return 0;
}

