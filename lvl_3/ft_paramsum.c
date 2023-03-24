#include <unistd.h>

void	ft_itoa(int n)
{
	char	c;

	c = '0';
	if (n > 9)
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}
	else
	{
		c = n % 10 + '0';
		write (1, &c, 1);
	}
	return ;
}

int	main(int argv, char **argc)
{
	ft_itoa(argv - 1);
	if (argc[0][0])
		write (1, "\n", 1);
}
