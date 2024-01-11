#include <unistd.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if(s[i] == reject[j])
				return i;
			j++;
		}
		i++;
	}
	return (i);
}

int	main()
{
	char k[] = "RTDFYGUHI874698";
	char r[] = "ZZZZZZZZ";

	int init = ft_strcspn(k, r);
	printf("%d\n", init);
	return 0;
}

