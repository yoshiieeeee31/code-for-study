#include <stdio.h>

int	main(void)
{
	int	n;
	int	*p;

	n = 57;
	p = &n;
	printf("n  = %d\n", n);
	printf("&n = %p\n", &n);
	printf("p  = %p\n", p);
	printf("*p = %d\n", *p);
	return (0);
}

