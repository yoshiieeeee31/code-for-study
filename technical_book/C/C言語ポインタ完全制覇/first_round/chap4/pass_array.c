#include <stdio.h>

void	func(int *array, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		printf("array[%d] : %d\n", i, array[i]);
		i++;
	}
}

int	main(void)
{
	int		*array;
	int		i;

	i = 1;
	while (i <= 5)
	{
		array[i - 1] = i;
		i++;
	}

	func(array, 5);

	return (0);
}
