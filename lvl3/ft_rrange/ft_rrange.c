#include <stdlib.h>
#include <unistd.h>

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int *arr;

	if (end > start)
		arr = (int *)malloc(sizeof(int) * (end - start));
	if (end < start)
		arr = (int *)malloc(sizeof(int) * (start - end));
	if (end == start)
	{
		arr = (int *)malloc(sizeof(int));
		arr[0] = end;
		return (arr);
	}
	if (arr)
	{
		while (end != start)
		{
			arr[i] = end;
			if (end > start)
				end--;
			if (end < start)
				end++;
			i++;
		}
		arr[i] = start;
	}
	return (arr);
}

