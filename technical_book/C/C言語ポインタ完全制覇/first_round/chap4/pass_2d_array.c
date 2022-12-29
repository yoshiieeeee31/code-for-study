#include <stdio.h>

void	func(int (*hoge)[3])
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d,", hoge[i][j]);
			j++;
		}
		putchar('\n');
		i++;
	}
}

int	main(void)
{
	int		hoge[][3] = {
			{1, 2, 3},
			{4, 5, 6},
			{7, 8, 9},
			{10, 11, 12},
	};

	func(hoge);
	return (0);
}
