#include <unistd.h>
#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	main(int argv, char **argc)
{
	int	i;

	i = 0;
	if (argv == 2)
	{
		while (argc[1][i])
			i++;
		i -= 1;
		while (i && ft_isspace(argc[1][i]))
			i--;
		while (i && !(ft_isspace(argc[1][i - 1])))
			i--;
		while (argc[1][i] && !ft_isspace(argc[1][i]))
			write (1, &argc[1][i++], 1);
	}
	write (1, "\n", 1);
	return (0);
}
