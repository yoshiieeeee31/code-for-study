#include <stdio.h>

void	fizzbuzz(int start, int end)
{
	int		i;

	i = start;
	while (i <= end)
	{
		if (i == 0)
			printf ("0\n");
		else if (i % 3 == 0 && i % 5 == 0)
			printf ("FizzBuzz\n");
		else if (i % 3 == 0)
			printf ("Fizz\n");
		else if (i % 5 == 0)
			printf ("Buzz\n");
		else
			printf ("%d\n", i);
		i++;
	}
}
