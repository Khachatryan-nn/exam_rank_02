#include <stdio.h>

int	ft_is_power_of_2(unsigned int n)
{
	while (n)
	{
		if ((n / 2 == 2 && n % 2 == 0) || n == 2 || n == 1)
			return (1);
		else if (n % 2 != 0)
			return (0);
		n /= 2;
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_is_power_of_2(128));
	return (0);
}
