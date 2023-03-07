#include <unistd.h>

int	main(int argv, char **argc)
{
	int	i;

	i = 0;
	if (argv == 2)
	{
		write (1, &argc[1][i++], 1);
		while (argc[1][i])
		{
			if (argc[1][i] >= 'A' && argc[1][i] <= 'Z')
			{
				write (1, "_", 1);
				argc[1][i] += 32;
				write (1, &argc[1][i++], 1);
			}
			else
				write (1, &argc[1][i++], 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}
