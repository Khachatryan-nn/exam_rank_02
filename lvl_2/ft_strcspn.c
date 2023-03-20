#include <string.h>
#include <stdio.h>

int	check(char c, const char *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!check(s[i], reject))
			i++;
		else
			return (i);
	}
	return (i);
}

int	main(int argv, char **argc)
{
	if (argv == 3)
	{
		printf("result of original function: %zu\n", strcspn(argc[1], argc[2]));
		printf("result of mine cpy function: %lu\n", ft_strcspn(argc[1], argc[2]));
	}
}
