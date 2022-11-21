#include <stdio.h>
#include <stdlib.h>

int			global_variable;
static int	file_static_variable;

void	func1(void)
{
	int			func1_variable;
	static int	local_static_variable;

	printf("&func1_variable…               \t%p\n", (void*)&func1_variable);
	printf("&local_static_variable…        \t%p\n", (void*)&local_static_variable);
}

void	func2(void)
{
	int		func2_variable;

	printf("&func2_variable…             \t%p\n",(void*)&func2_variable);
}

int		main(void)
{
	int		*p;

	/* 関数へのポインタの表示 */
	printf("func1…                      \t%p\n", (void*)func1);
	printf("func2…                     \t%p\n", (void*)func2);

	/* 文字列リテラルのアドレスの表示 */
	printf("string literal…             \t%p\n", (void*)"abc");

	/* グローバル変数のアドレスの表示 */
	printf("&global_variable…            \t%p\n", (void*)&global_variable);
	
	/* ファイル内static変数のアドレスの表示 */
	printf("&file_static_variable…        \t%p\n", (void*)&file_static_variable);
	
	/* ローカル変数の表示 */
	func1();
	func2();

	/* mallocにより確保した領域のアドレス */
	p = malloc(sizeof(int));
	printf("malloc address…               \t%p\n", (void*)p);

	return (0);
}
