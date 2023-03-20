#include <stdio.h>
#include <unistd.h>

void	print_bits(unsigned char c)
{
	int		i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = (c >> i & 1) + '0';
		write (1, &bit, 1);
	}
}

unsigned char	swap_bits1(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}

int	main(void)
{
	print_bits('l');
	write (1, "\n", 1);
	print_bits(swap_bits1('l'));
	write (1, "\n", 1);
	print_bits(swap_bits2('1'));
	write (1, "\n", 1);
}
