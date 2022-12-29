#include "libft.h"

void	fizzbuzz(int start, int end)
{
	int		i;

	i = start;
	while (i <= end)
	{
		if (i == 0)
			ft_putstr_fd("0", 1);
		else if (i % 3 == 0 && i % 5 == 0)
			ft_putstr_fd("FizzBuzz", 1);
		else if (i % 3 == 0)
			ft_putstr_fd("Fizz", 1);
		else if (i % 5 == 0)
			ft_putstr_fd("Buzz", 1);
		else
			ft_putnbr_fd(i, 1);
		ft_putchar_fd('\n', 1);
		i++;
	}
}
