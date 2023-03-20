#include <unistd.h>

void	ft_write(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	write (1, &c, 1);
}

int	main(int argv, char **argc)
{
	int	i;

	i = 0;
	if (argv == 2)
	{
		while (argc[1][i])
		{
			if (argc[1][i] != '_')
				write (1, &argc[1][i], 1);
			else if (argc[1][i + 1] != '\0')
			{
				write (1, " ", 1);
				ft_write (argc[1][++i]);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
