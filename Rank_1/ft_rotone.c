#include <unistd.h>

int	main(int argv, char **argc)
{
	int	i;

	i = 0;
	if (argv == 2)
	{
		while (argc[1][i])
		{
			if (argc[1][i] == 'z' || argc[1][i] == 'Z')
				argc[1][i] -= 25;
			else if ((argc[1][i] >= 'a' && argc[1][i] < 'z') || \
				(argc[1][i] >= 'A' && argc[1][i] < 'Z'))
				argc[1][i] += 1;
			write (1, &argc[1][i++], 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}
