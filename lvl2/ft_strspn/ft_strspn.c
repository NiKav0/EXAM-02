#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return 0;
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i])
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		i++;
	}
	return i;
}

int	main()
{
	char k[] = "8451ASDFGHJKL84126";
	char check[] = "0123456789";
	printf("dyali: %ld\ndyalhom: %ld\n", ft_strspn(k, check), strspn(k, check));
}

