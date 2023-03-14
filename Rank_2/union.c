#include <stdio.h>
#include <unistd.h>

int	ft_check(const char *s, char c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check2(const char *s1, const char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s2[n] == s2[i])
			return (0);
		i++;
	}
	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[n])
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
			if (ft_check(argc[1], argc[1][i], i))
				write (1, &argc[1][i], 1);
			i++;
		}
		i = 0;
		while (argc[2][i])
		{
			if (ft_check2(argc[1], argc[2], i))
				write (1, &argc[2][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
