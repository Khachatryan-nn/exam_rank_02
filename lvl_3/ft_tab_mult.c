#include <unistd.h>

int	ft_atoi(char *str)
{
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	while (str[i])
	{
		counter *= 10;
		counter += str[i] - '0';
		i++;
	}
	return (counter);
}

void	ft_putnbr(int	nmbr)
{
	char	c;

	c = '0';
	if (nmbr > 9)
	{
		ft_putnbr(nmbr / 10);
		ft_putnbr(nmbr % 10);
	}
	else
	{
		c = nmbr + '0';
		write (1, &c, 1);
	}
}

int	main(int argv, char **argc)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	if (argv == 2)
	{
		num = ft_atoi(argc[1]);
		while (++i < 10)
		{
			ft_putnbr (i);
			write (1, " x ", 3);
			ft_putnbr (num);
			write (1, " = ", 3);
			ft_putnbr (num * i);
			if (i != 9)
				write (1, "\n", 1);
		}
	}
	write (1, "\n", 1);
}
