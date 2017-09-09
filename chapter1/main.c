#include <stdio.h>
#include <stdlib.h>

int max(int x, int y) {

    return x > y ? x : y;
}
//º¯ÊıÖ¸Õë
int main(void)
{
    int (*p)(int, int) = max;
    int a, b, c, d;
    scanf("%d %d %d", & a, & b, & c);
    d=p(p(a,b),c);
    printf("%d", d);
    return d;
}


