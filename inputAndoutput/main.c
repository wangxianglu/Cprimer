#include <stdio.h>
#include <stdlib.h>

int main()
{
    float value;
    printf("enter next value!\n");
    scanf("%f", &value);/*代表实际存储值*/
    printf("%f", value);

    char str[100];
    gets(str);
    puts(str);
    return 0;
}
