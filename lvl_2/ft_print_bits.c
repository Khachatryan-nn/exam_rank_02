#include <unistd.h>

void	print_bits(char octet)
{
	int	i;
	char	bit;

	i = 32;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write (1, &bit, 1);
	}
}

int	main(void)
{
	print_bits(-1);
	write(1, "\n", 1);
	print_bits(1);
	write(1, "\n", 1);		
	print_bits(3);
	write(1, "\n", 1);		
	print_bits(-3);
	write(1, "\n", 1);		
	print_bits(-0);
	write(1, "\n", 1);		
}
