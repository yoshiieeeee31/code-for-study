#include <stdio.h>

int		main(void)
{
	int		*array;
	int		i;

	array = NULL;
	i = 0;
	while (i < 5)
	{
		array[i] = i;
		i++;
	}
	i = 0;
	while (i < 5)
	{
		printf("%d\n", array[i]);
		i++;
	}
	return (0);
}
