#include <unistd.h>

int	ft_itoa(int num)
{
	char	c;

	c = '0';
	if (num > 9)
	{
		ft_itoa(num / 10);
		ft_itoa(num % 10);
	}
	else
	{
		c = num % 10 + '0';
		write (1, &c, 1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (str[i])
	{
		counter *= 10;
		counter += str[i] - '0';
		i++;
	}
	return (counter);
}

int	main(int argv, char **argc)
{
	int	i;
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	i = 0;
	if (argv == 3)
	{
		num1 = ft_atoi(argc[1]);
		num2 = ft_atoi(argc[2]);
		i = (num1 > num2) ? num2 : num1;
		while (i)
		{
			if (num1 % i == 0 && num2 % i == 0)
			{
				ft_itoa(i);
				return (0);
			}
			i--;
		}
	}
	write (1, "\n", 1);
}
