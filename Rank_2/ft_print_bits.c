#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int		len;
	unsigned char	bit;

	len = 8;
	while (len--)
	{
		bit = (octet >> len & 1) + '0';
		write (1, &bit, 1);
	}
}

int	main(void)
{
	printf("first:\n");
	print_bits(2);
	printf("\nsecond:\n");
	print_bits(16);
	return (0);
}
