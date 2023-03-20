#include <unistd.h>

static void	ft_putchar(char c, int mode)
{
	if (mode == 1)
	{
		c += 13;
		write (1, &c, 1);
	}
	else if (mode == 2)
	{
		c -= 13;
		write (1, &c, 1);
	}
	else
		write (1, &c, 1);
	return ;
}

int	main(int argv, char **argc)
{
	int	i;

	i = 0;
	if (argv == 2)
	{
		while (argc[1][i])
		{
			if ((argc[1][i] >= 'a' && argc[1][i] < 'n') || \
				(argc[1][i] >= 'A' && argc[1][i] < 'N'))
				ft_putchar(argc[1][i], 1);
			else if ((argc[1][i] > 'm' && argc[1][i] <= 'z') || \
				(argc[1][i] > 'M' && argc[1][i] <= 'Z'))
				ft_putchar(argc[1][i], 2);
			else
				ft_putchar(argc[1][i], 3);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
