#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	int	sw;
	int	*p;

	x = 123;
	y = 456;
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("変更するのは [0…x / 1…y] = ");
	scanf("%d", &sw);
	if (sw == 0)
		p = &x;
	else
		p = &y;
	*p = 999;
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	return (0);
}
