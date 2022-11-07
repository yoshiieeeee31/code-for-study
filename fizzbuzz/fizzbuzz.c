#include "fizzbuzz.h"

int	main(void)
{
	int	i;

	i = 1;
	while (i < 10001)
	{
		if (i % 3 == 0 && i % 5 == 0)
			ft_putstr ("FizzBuzz\n");
		else if (i % 3 == 0)
			ft_putstr ("Fizz\n");
		else if (i % 5 == 0)
			ft_putstr ("Buzz\n");
		else
		{
			ft_putnbr (i);
			ft_putchar ('\n');
		}
		i++;
	}
	return (0);
}
