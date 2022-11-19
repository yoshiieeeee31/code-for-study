#include <stdio.h>

int		main(void)
{
	int		array[5];
	int		i;
	
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
	i = 0;
	while (i < 5)
	{
		printf("&array[%d]…%p\n", i,(void*)&array[i]);
		i++;
	}
	return (0);
}
