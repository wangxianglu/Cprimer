#include <stdio.h>
#include <stdlib.h>
// 在C语言中，字符串实际上是使用null字符'\0'终止的一维字符数组
int main()
{
    char greeting[6] = {'h', 'e', 'l', 'l', 'o', '\0'};

    char greetingT[6] = "hello";
    printf("greeting is %s\n", greetingT);
    return 0;
}
