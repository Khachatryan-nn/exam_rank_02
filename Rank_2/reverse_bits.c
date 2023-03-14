#include <stdio.h>
#include <unistd.h>

void showbits (int n)
{
  int i, k, andmask;
 
  for (i = 7; i >= 0;i--)
  {
    andmask = 1 << i;
    k = n & andmask;
    k == 0 ? printf ("0") : printf ("1");
  }
}

unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

int	main(void)
{
	char	c;

	c = '1';
	showbits(c);
	printf ("\n");
	showbits(reverse_bits(c));
	printf ("\n");
	return (0);
}
