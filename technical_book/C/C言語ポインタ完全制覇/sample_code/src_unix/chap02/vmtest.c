#include <stdio.h>

int hoge;

int main(void)
{
    char        buf[256];

    printf("&hoge...%p\n", (void*)&hoge);

    printf("Input initial value.\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &hoge);

    for (;;) {
        printf("hoge..%d\n", hoge);
        /*
         * getchar()で入力待ちの状態にする.
         * リターンキーを叩くごとに,hogeの値が増加する.
         */
        getchar();
        hoge++;
    }

    return 0;
}
