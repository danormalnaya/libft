#include <stdio.h>
int main(void)
{
	printf("%d\n", !ft_isascii(-1));
	printf("%d\n", ft_isascii(0));
	printf("%d\n", ft_isascii(1));
	printf("%d\n", !ft_isascii(101));
	printf("%d\n", ft_isascii(127));
	printf("%d\n", ft_isascii(128));
	return (0);
}
