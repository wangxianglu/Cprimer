#include <stdio.h>
#include <stdlib.h>
// ��C�����У��ַ���ʵ������ʹ��null�ַ�'\0'��ֹ��һά�ַ�����
int main()
{
    char greeting[6] = {'h', 'e', 'l', 'l', 'o', '\0'};

    char greetingT[6] = "hello";
    printf("greeting is %s\n", greetingT);
    return 0;
}
