#include <stdio.h>

void	adjust_point(int *n)
{
	if (*n < 0)
		*n = 0;
	else if (*n > 100)
		*n = 100;
}

int	main(void)
{
	int	x[10];
	int	i;

	i = 0;
	while (i < 10)
	{
		x[i] = i * 15 - 50;
		i++;
	}
	i = 0;
	while (i < 10)
	{
		printf("%d\n", x[i]);
		i++;
	}
	i = 0;
	while (i < 10)
	{
		adjust_point(x + i);
		i++;
	}
	i = 0;
	while (i < 10)
	{
		printf("%d\n", x[i]);
		i++;
	}
	return (0);
}

