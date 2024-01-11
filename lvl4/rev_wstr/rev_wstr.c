#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	spaces(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	counter(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i])
	{
		while (str[i] && spaces(str[i]))
			i++;
		while (str[i] && !spaces(str[i]))
		{
			count++;
			while (str[i] && !spaces(str[i]))
				i++;
		}
	}
	return count;
}

char	*allocate(char *str)
{
	int i = 0;
	char *word;

	while (str[i] && !spaces(str[i]))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !spaces(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return word;
}

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int len = counter(str);
	char **ptr = (char **)malloc(sizeof(char *) * (len + 1));

	if (!ptr)
		return NULL;
	while (str[i])
	{
		while (str[i] && spaces(str[i]))
			i++;
		while (str[i] && !spaces(str[i]))
		{
			ptr[j] = allocate(&str[i]);
			j++;
			while (str[i] && !spaces(str[i]))
				i++;
		}
	}
	ptr[j] = NULL;
	return ptr;
}

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		char **ptr = ft_split(av[1]);

		while (ptr[i])
			i++;
		i--;
		while (i >= 0)
		{
			ft_putstr(ptr[i]);
			if (i > 0)
				write(1, " ", 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return 0;
}

