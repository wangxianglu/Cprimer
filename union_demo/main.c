#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*���干ͬ�壬��ͬ���ʾ����������͹���һ�����ݴ洢��ַ���������洢��С���ɳ�Ա������ֽ�������*/
/* ���� Data����� �洢�ֽ��� 20*/
union Data {
    int i;
    float f;
    char str[20]; /* ����ֽ���*/
};
int main()
{
    union Data data;
    printf("data ռ��λ�� %d\n", sizeof(data));

    data.i = 1;
    printf("%d\n", data.i);  /* ��ֻʹ��i�ڴ��� i ����ȷ��*/
    data.f = 10;
    strcpy(data.str, "C primer plus");

    printf("%d\n", data.i);  /* �������str �Ѿ�ռ���� �ڴ�*/
    printf("%f\n", data.f);
    printf("%s\n", data.str);
    return 0;
}
