#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int x = atoi(av[1]);
	int y = atoi(av[2]);

	if (ac == 3)
	{
		if (x > 0 && x > 0)
		{
			while (x != y)
			{
				if (x > y)
					x -= y;
				else
					y -=y;
			}
			printf("%d", x);
		}
	}
	printf("\n");
	return 0;
}

