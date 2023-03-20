#include <unistd.h>
#include <stdio.h>

static int	atoi(char	*a)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	sign = 1;
	num = 0;
	if (a[i] == '-')
		sign = -1 + i++;
	while (a[i])
	{
		num *= 10;
		num += a[i] - '0';
		i++;
	}
	return (sign * num);
}

static void	putnbr(int	i)
{
	char	c;

	if (i < 0)
	{
		write (1, "-", 1);
		i *= -1;
	}
	if (i > 9)
	{
		putnbr(i / 10);
		putnbr(i % 10);
	}
	else
	{
		c = i + '0';
		write (1, &c, 1);
	}
	return ;
}
		
int	main(int argv, char **argc)
{
	int	i;

	i = 0;
	if (argv == 4)
	{
		if (argc[2][0] == '+')
			i = atoi(argc[1]) + atoi(argc[3]);
		else if (argc[2][0] == '-')
			i = atoi(argc[1]) - atoi(argc[3]);
		else if (argc[2][0] == '*')
			i = atoi(argc[1]) * atoi(argc[3]);
		else if (argc[2][0] == '/')
			i = atoi(argc[1]) / atoi(argc[3]);
		putnbr(i);
	}
	write (1, "\n", 1);
	return (0);
}
