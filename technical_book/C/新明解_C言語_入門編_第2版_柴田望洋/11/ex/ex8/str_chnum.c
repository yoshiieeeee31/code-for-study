#include <stdio.h>

int	str_chnum(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	int	i;

	argc = 3;
	printf("%d\n", argc);
	i = str_chnum(argv[1], argv[2][0]);
	printf("%d\n", i);
	return (0);
}

