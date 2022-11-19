#include <stdio.h>

void	set_idx(int *v, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		v[i] = i;
		i++;
	}
}

int	main(void)
{
	int	v[10];
	int	i;

	set_idx(v, 10);
	i = 0;
	while (i < 10)
	{
		printf("%d\n", v[i]);
		i++;
	}
	return (0);
}
