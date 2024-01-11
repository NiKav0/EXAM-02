#include <unistd.h>
#include <stdio.h>

char    *ft_strrev(char *str)
{
	int i = -1;
	int len = 0;
	char rev;

	while (str[len])
		len++;
	while (++i < (len / 2))
	{
		rev = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = rev;
	}
	return str;
}
