#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    typedef �ؼ��� ������Ϊ����ȡһ���µ�����
    typedef unsigned chat BYTE;  ���ֽ������� ����BYTE

*/
/*
    typedef �� #define �������Ʋ�ͬ������
    1:typedef ������Ϊ���Ͷ���������ƣ�#define ��������Ϊ���Ͷ��������Ҳ��Ϊ��ֵ������������������Զ��� 1 Ϊ ONE��
    2:typedef ���ɱ�����ִ�н��͵ģ�#define �������Ԥ���������д���ġ�
*/
/*����ṹ��Books*/
#define TRUE 1
 typedef struct Books {
    char title[50];
    char author[50];
} Book;
int main()
{
    Book book;  /*����ͨû��typedef ��� ����ʹ�� struct�ؼ�������*/
    strcpy(book.title, "C primer plus");
    strcpy(book.author, "wang");
    printf("%s\n", book.title);
    printf("%s\n", book.author);
    printf("%d", TRUE); //define ����TRUE Ϊ����1
    return 0;
}
