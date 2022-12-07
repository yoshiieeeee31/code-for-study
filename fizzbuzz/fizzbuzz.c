#include <stdio.h>

void	fizzbuzz(int start, int end)
{
	while (start <= end)
	{
		if (start == 0)
			printf ("0\n");
		else if (start % 3 == 0 && start % 5 == 0)
			printf ("FizzBuzz\n");
		else if (start % 3 == 0)
			printf ("Fizz\n");
		else if (start % 5 == 0)
			printf ("Buzz\n");
		else
			printf ("%d\n", start);
		start++;
	}
}
