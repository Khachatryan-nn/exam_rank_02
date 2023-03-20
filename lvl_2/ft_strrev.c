#include <stdio.h>

int	ft_strlen(char	*s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	char	c;

	i = 0;
	c = 'x';
	len = ft_strlen(str);
	while (i < len / 2)
	{
		c = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = c;
		i++;
	}
	return (str);
}

int	main(int argv, char **argc)
{
	if (argv > 1)
	{
		printf("func:%s\n", ft_strrev(argc[1]));
	}
}
