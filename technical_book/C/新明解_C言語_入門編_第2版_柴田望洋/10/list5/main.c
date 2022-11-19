#include <stdio.h>

void	set999(int *p)
{
	*p = 999;
}


int	main(void)
{
	int	x;
	int	y;
	int	sw;

	x = 123;
	y = 456;
	printf("%d\n", x);
	printf("%d\n", y);
	scanf("%d", &sw);
	if (sw == 0)
		set999(&x);
	else
		set999(&y);
	printf("%d\n", x);
	printf("%d\n", y);
	return (0);
}
