#include "fizzbuzz.h"

int	main(void)
{
	char	**a;
	int		i;

	a[0] = "Lisp";
	a[1] = "C#";
	a[2] = "Python";
	i = 0;
	while (a[i])
	{
		ft_putstr(a[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
