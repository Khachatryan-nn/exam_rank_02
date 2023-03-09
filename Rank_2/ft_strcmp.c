#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1[i] == '\0' == s2[i])
		return (0);
	while (s1[2] != '\0' && s2[2] != '\0' && s1[i] == s2[i])
	{
		i++;
		if (s1[i] == '\0' == s2[i])
			return (0);
	}
	return (s1[i] - s2[i]);
}

int	main(int argv, char **argc)
{
	if (argv > 2)
	{
		printf("original:%d\n", strcmp(argc[1], argc[2]));
		printf("copy fnc:%d\n", ft_strcmp(argc[1], argc[2]));
	}
	else
		printf("there are no input for strcmp function call");
	return (0);
}
