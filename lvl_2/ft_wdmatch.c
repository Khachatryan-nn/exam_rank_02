#include <unistd.h>

int	ft_check(char *str, char *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] != set[j] && set[j])
			j++;
		if (str[i] != set[j])
			return (0);
		else
			i++;
	}
	return (1);
}

int	main(int argv, char **argc)
{
	int	i;

	i = 0;
	if (argv == 3 && ft_check(argc[1], argc[2]))
	{
		while (argc[1][i])
		{
			write (1, &argc[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
