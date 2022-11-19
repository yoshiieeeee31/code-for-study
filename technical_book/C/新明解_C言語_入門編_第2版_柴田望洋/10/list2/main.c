#include <stdio.h>

int	main(void)
{
	int		n;
	double	x;
	int		a[3];

	printf("n     adress : %p\n", &n);
	printf("x     adress : %p\n", &x);
	printf("a[0]  adress : %p\n", &a[0]);
	printf("a[1]  adress : %p\n", &a[1]);
	printf("a[2]  adress : %p\n", &a[2]);
	return (0);
}
