#include <stdlib.h>
#include <stdio.h>

int	ft_isdelitimer(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	ft_wcounter(char *str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (ft_isdelitimer(str[i]))
		i++;
	while (str[i])
	{
		i++;
		if (ft_isdelitimer(str[i]) || (!ft_isdelitimer(str[i - 1]) && str[i] == '\0'))
		{
			while (ft_isdelitimer(str[i]))
				i++;
			counter++;
		}
	}
	return (counter);
}

char	*ft_get_word(char *str, int *i)
{
	int	len;
	int	k;
	char	*word;

	len = 0;
	k = 0;
	while (ft_isdelitimer(str[*i + len]))
		(*i)++;
	while (!ft_isdelitimer(str[*i + len]) && str[*i + len] != '\0')
		len++;
	word = (char *)malloc(sizeof(char) * len + 1);
	word[len] = '\0';
	while (k < len)
	{
		word[k] = str[*i];
		k++;
		(*i)++;
	}
	return (word);
}

char	**ft_split(char *str)
{
	int	arr_len;
	int	i;
	int	j;
	char	**str_array;
	if (!str)
		return (NULL);

	i = 0;
	j = 0;
	arr_len = ft_wcounter(str);
	str_array = (char **)malloc(sizeof(char *) * arr_len + 1);
	if (!str_array)
		return (NULL);
	while (i < arr_len)
	{
		str_array[i] = ft_get_word (str, &j);
		i++;
	}
	str_array[arr_len] = NULL;
	return (str_array);
}

int	main(int argv, char **argc)
{
	char	**arr;
	int	i;

	i = 0;
	if (argv == 2)
	{
		arr = ft_split(argc[1]);
		while (arr[i - 1] != NULL || arr[i] != NULL)
		{
			printf("%s\n", arr[i]);
			i++;
		}
	}
}
