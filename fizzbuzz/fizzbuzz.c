#include "fizzbuzz.h"

void	fizzbuzz(int start, int end)
{
	while (start <= end)
	{
		if (start % 3 == 0 && start % 5 == 0)
			ft_putstr ("FizzBuzz\n");
		else if (start % 3  == 0)
			ft_putstr ("Fizz\n");
		else if (start % 5  == 0)
			ft_putstr ("Buzz\n");
		else
		{
			ft_putnbr (start);
			ft_putchar ('\n');
		}
		start++;
	}
}

