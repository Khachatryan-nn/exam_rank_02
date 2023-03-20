#include <stdio.h>
#include <unistd.h>

int	ft_check(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_check2(const char *s1, const char *s2, int n)
{
	int	i;

	i = 0;
	if (ft_check(s2, s1[n]) == 0)
			return (0);
	while (i < n)
	{
		if (s1[i] == s1[n])
			return (0);
		i++;
	}
	return (1);
}

int	main(int argv, char **argc)
{
	int	i;

	i = 0;
	if (argv == 3)
	{
		while (argc[1][i])
		{
			if (ft_check2(argc[1], argc[2], i))
				write (1, &argc[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
