#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	unsigned int	index;
	unsigned int	i;

	index = 0;
	i = 0;
	while (i < len)
	{
		if (tab[i] > tab[index])
			index = i;
		i++;
	}
	return (tab[index]);
}

int	main(void)
{
	int	x[10] = {10, 12, 14, 13, 8123, 2198, 8123, 13, 01, 123};

	printf("largest number: %d\n", max(x, 10));
	return (0);
}
