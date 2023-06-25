void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main()
{
	int a = 10;
	int b = 5;
	int divided, modulo;
	ft_div_mod(a, b, &divided, &modulo);
	printf("%d divided by %d results in %d, with a remainder of %d\n", a, b, divided, modulo);
}
*/
