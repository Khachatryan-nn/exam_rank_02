#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*str;

	i = 0;
	if (!src)
		return (NULL);
	str = (char *)malloc(ft_strlen(src) + 1);
	if (!str)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	src[i] = '\0';
	return (str);
}

int	main(int	argv, char **argc)
{
	if (argv == 2)
	{
		printf("original:%s\n", strdup(argc[1]));
		printf("mine ver:%s\n", ft_strdup(argc[1]));
	}
	return (0);
}
