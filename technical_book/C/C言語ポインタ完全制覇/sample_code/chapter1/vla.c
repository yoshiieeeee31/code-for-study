#include <stdio.h>

int		main(void)
{
	int		size1;
	int		size2;
	int		size3;

	printf("整数値を３つ入力してください\n");
	scanf("%d%d%d", &size1, &size2, &size3);
	
	int		array1[size1];
	int		array2[size2][size3];
	
	int		i;
	i = 0;
	while (i < size1)
	{
		array1[i] = i;
		i++;
	}
	int		j;
	i = 0;
	while (i < size2)
	{
		j = 0;
		while (j < size3)
		{
			array2[i][j] = i * size3 + j;
			j++;
		}
		i++;
	}
	i = 0;
	while (i < size1)
	{
		printf("array1[%d]…%d\n", i, array1[i]);
		i++;
	}
	i = 0;
	while (i < size2)
	{
		j = 0;
		while (j < size3)
		{
			printf("\t%d", array2[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
	printf("sizeof(array1)…%zd\n", sizeof(array1));
	printf("sizeof(array2)…%zd\n", sizeof(array2));
	return (0);
}

