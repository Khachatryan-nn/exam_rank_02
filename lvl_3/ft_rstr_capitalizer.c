#include <unistd.h>

int	ft_isspace(char c)
{
	if (c >= 9 && c <= 13)
		return (1);
	else if (c == 32)
		return (1);
	else
		return (0);
}

int	ft_isupp(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_islow(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	main(int argv, char **argc)
{
	int	i;
	int	j;

	i = 1;
	if (argv > 1)
	{
		while (i < argv)
		{
			j = 0;
			while (argc[i][j])
			{
				if (ft_islow(argc[i][j]) && (ft_isspace(argc[i][j + 1]) || argc[i][j + 1] == '\0'))
					argc[i][j] -= 32;
				else if (ft_isupp(argc[i][j]) && (!ft_isspace(argc[i][j + 1]) && argc[i][j + 1] != '\0'))
					argc[i][j] += 32;
				write (1, &argc[i][j], 1);
				j++;
			}
			if (++i < argv)
				write (1, "\n", 1);
			}
	}
	write (1, "\n", 1);
}
