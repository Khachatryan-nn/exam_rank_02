#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		while (s2[j])
		{
			if (s2[j] == s1[i])
				return ((char *) &s1[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}

int	main(int argv, char **argc)
{
	if (argv == 3)
	{
		printf("orig:%s\n", strpbrk(argc[1], argc[2]));
		printf("mine:%s\n", ft_strpbrk(argc[1], argc[2]));
	}
	return (0);
}
