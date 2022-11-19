#include <stdio.h>

char	*str_chr(char *s, char c);

int	main(int argc, char **argv)
{
	char	*str;
	char	c;
	
	argc = 3;
	c = argv[2][0];
	str = str_chr(argv[1], c);
	printf("%d\n%s\n", argc, str);
	return (0);
}
