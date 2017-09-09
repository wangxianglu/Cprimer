#include <stdio.h>

/* bit field*/
int main() {

    struct bs
    {
        unsigned a:1; /*unsigned a:1 equals unsigned int a:1, default type int*/
        unsigned b:3;
        unsigned c:4;
    }bit, *pbit;

    bit.a = 1; /*��λ��ֵ*/
    bit.b = 7;
    bit.c = 15;
    printf("%d\n%d\n%d\n", bit.a, bit.b, bit.c);
    pbit = &bit; /*��λ��ṹ��ָ��*/
    pbit->a = 0; /* ʹ��ָ����� �ṹ*/
    pbit->b &= 3;
    pbit->c |= 1;
    printf("%d\n%d\n%d\n", pbit->a, pbit->b, pbit->c);
    return 0;
}
