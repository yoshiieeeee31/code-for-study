#include <stdio.h>

void	del_digit(char *str);

int	main(void)
{
	char	*s;

	s = "44AB16C9";
	printf("%s\n", s);
	del_digit(s);
	printf("%s\n", s);
	return (0);
}
