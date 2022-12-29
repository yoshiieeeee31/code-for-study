#include "libft.h"

void	fizzbuzz(int start, int end);

int		ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 48 || str[i] > 57))
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		start;
	int		end;
	int		tmp;

	if (!(ft_str_is_numeric(argv[1]) && ft_str_is_numeric(argv[2])))
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	argc = 3;
	start = ft_atoi(argv[1]) - argc + 3;
	end = ft_atoi(argv[2]);
	if (start == end)
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	else if (start > end)
	{
		tmp = end;
		end = start;
		start = tmp;
	}
	fizzbuzz(start, end);
	return (0);
}
