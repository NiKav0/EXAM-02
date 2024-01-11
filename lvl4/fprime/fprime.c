#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int i;
	int num;
	if (ac == 2)
	{
		i = 1;
		num = atoi(av[1]);
		if (num == 1)
			printf("1");
		while (i++ <= num)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				if (num == i)
					break;
				printf("*");
				num /= i;
				i = 1;
			}
		}
	}
	printf("\n");
	return 0;
}

