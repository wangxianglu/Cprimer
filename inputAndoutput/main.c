#include <stdio.h>
#include <stdlib.h>

int main()
{
    float value;
    printf("enter next value!\n");
    scanf("%f", &value);/*����ʵ�ʴ洢ֵ*/
    printf("%f", value);

    char str[100];
    gets(str);
    puts(str);
    return 0;
}
