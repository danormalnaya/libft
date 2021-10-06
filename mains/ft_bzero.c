#include <stdio.h>
int	main (void)
{
	unsigned char	a[] = "tiytrrew";
	ft_bzero(a, 8);
	printf("%s\n", a);
}