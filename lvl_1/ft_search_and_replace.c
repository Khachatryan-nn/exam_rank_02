#include <unistd.h>

int	main(int argv, char **argc)
{
	int	i;

	i = 0;
	if (argv == 4 && argc[2][1] == '\0' && argc[3][1] == '\0')
	{
		while (argc[1][i])
		{
			if (argc[1][i] == argc[2][0])
				argc[1][i] = argc[3][0];
			write (1, &argc[1][i++], 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}
