#include <stdio.h>

typedef struct
{
	char	char1;
	int		int1;
	char	char2;
	double	double1;
	char	char3;
}	Hoge;

int		main(void)
{
	Hoge	hoge;

	printf("hoge size…%d\n", (int)sizeof(Hoge));

	printf("hoge …  \t%p\n", (void*)&hoge);
	printf("char1 …  \t%p\n", (void*)&hoge.char1);
	printf("int1 …   \t%p\n", (void*)&hoge.int1);
	printf("char2 …  \t%p\n", (void*)&hoge.char2);
	printf("double1 …\t%p\n", (void*)&hoge.double1);
	printf("char3 …  \t%p\n", (void*)&hoge.char3);

	return (0);
}
