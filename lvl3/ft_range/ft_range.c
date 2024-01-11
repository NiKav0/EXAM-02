#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int i = 0;
	int *arr;

	if (start > end)
		arr = (int *)malloc(sizeof(int) * (start - end + 1));
	if (start < end)
		arr = (int *)malloc(sizeof(int) * (end - start + 1));
	if (start == end)
	{
		arr = (int *)malloc(sizeof(int));
		arr[0] = start;
		return (arr);
	}
	if (arr)
	{
		while (start != end)
		{
			arr[i] = start;
			if (start < end)
				start++;
			if (start > end)
				start--;
			i++;
		}
		arr[i] = end;
	}
	return (arr);
}

