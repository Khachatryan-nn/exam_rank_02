#include <unistd.h>

void	ft_sndstr(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	write (1, &str[i], 1);
	i++;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && ((str[i - 1] >= 9 && \
			str[i - 1] <= 13) || str[i - 1] == 32))
			str[i] -= 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && !((str[i - 1] >= 9 \
			&& str[i - 1] <= 13) || str[i - 1] == 32))
			str[i] += 32;
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argv, char **argc)
{
	int	i;

	i = 0;
	if (argv > 1)
	{
		while (++i < argv)
		{
			ft_sndstr(argc[i]);
			if (i != argv - 1)
				write (1, "\n", 1);
		}
	}
	write (1, "\n", 1);
}
