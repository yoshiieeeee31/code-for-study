#include <stdio.h>

int	str_length(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	*str;

	str = NULL;
	printf("put str : ");
	scanf("%s", str);

	printf("%s : %d\n", str, str_length(str));
	return (0);
}
