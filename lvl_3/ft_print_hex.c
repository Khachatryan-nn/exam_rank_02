#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i])
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num);
}

void	ft_itohx(int num)
{
	char	c;

	c = '0';
	if (num > 15)
	{
		ft_itohx(num / 16);
		ft_itohx(num % 16);
	}
	else
	{
		if (num > 9)
			c = 'a' + num - 10;
		else
			c = num + '0';
		write (1, &c, 1);
	}
}

int	main(int argv, char **argc)
{
	int	num;

	num = 0;
	if (argv == 2)
	{
		num = ft_atoi(argc[1]);
		ft_itohx(num);
	}
	write (1, "\n", 1);
}
