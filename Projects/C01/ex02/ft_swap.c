void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>

int	main(void)
{
	int	x = 1;
	int	y = 2;

	ft_swap(&x, &y);
	printf("%d,%d\n", x, y);
}
*/
