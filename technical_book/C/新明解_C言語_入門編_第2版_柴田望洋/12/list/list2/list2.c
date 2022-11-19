#include "output.h"

void	set_std(struct s_student *s)
{
	if ((*s).weight <= 0)
		(*s).weight = ((*s).height - 100) * 0.9;
}

int	main(void)
{
	struct s_student	takao;

	takao.name = "takao";
	takao.height = 173;
	set_std(&takao);
	ft_putstr(takao.name);
	ft_putchar('\n');
	ft_putnbr(takao.height);
	ft_putchar('\n');
	ft_putnbr(takao.weight);
	ft_putchar('\n');
	return (0);
}
