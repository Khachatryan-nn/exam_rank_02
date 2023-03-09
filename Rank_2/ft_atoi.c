#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[0] == '-')
		sign = -1 + i++;
	else if (str[0] == '+')
		i++;
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			break;
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num * sign);
}

int	main(int	argv, char	**argc)
{
	if (argv > 1)
	{
		printf("original:%d\n", atoi(argc[1]));
		printf("mine ftv:%d\n", ft_atoi(argc[1]));
	}
	else
		printf("There are no inputs for atoi function to work with them\n");
}
