#include <stdio.h>

/* nの最大数 */
#define N_MAX (100)

/* 数字を使用したら、その添字の要素を1にする */
int 	used_flag[N_MAX + 1];

int 	result[N_MAX];
int 	n;
int 	r;

void print_result(void)
{
    int		i;

	i = 0;
	while (i < r)
	{
		printf("%d ", result[i]);
		i++;
	}
    printf("\n");
}

void permutation(int nth)
{
    int		i;

    if (nth == r)
	{
		print_result();
		return;
    }
	i = 1;
	while (i <= n)
	{
		if (used_flag[i] == 0)
		{
	    	result[nth] = i;
	    	used_flag[i] = 1;
	    	permutation(nth + 1);
	    	used_flag[i] = 0;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
    sscanf(argv[1], "%d", &n);
    sscanf(argv[2], "%d", &r);

    permutation(0);
}
