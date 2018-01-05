#include <stdio.h>
int main(void)
{
    char a,b,c;
    a='T',b='M',c='D';
    putchar(a);   /*输出字符*/
    putchar(b);
    putchar(c);
    putchar('\n'); /*换行*/
    putchar(a);
    putchar('\n');
    putchar(b);
    putchar('\n');
    putchar(c);
    putchar('\n');
    return 0;
}

// 输出 TMD
// T
// M
// D