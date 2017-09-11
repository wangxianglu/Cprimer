#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
��̬�ڴ����, C Ϊ�ڴ����͹����ṩ�ĺ�����<stdlib.h> ͷ�ļ���  void* : �������͵�ָ��
1:void *calloc(int number, int size); >���ڴ��ж�̬����num������Ϊsize�������ռ䣬����ÿ���ֽڳ�ʼ��Ϊ0��������������num*size���ֽڳ��ȵĿռ䣬ÿ���ֽڵ�ֵ��0
2��void free(void *address); >�ͷ�address ��ָ����ڴ�飬�ͷŵ��Ƕ�̬������ڴ�ռ�
3��void *malloc(int num); > �ڶ�������һ���ƶ���С���ڴ�ռ䣬�����������.����ڴ�ռ��ں���ִ����󲻻ᱻ��ʼ��, ���ǵ�ֵ��δ֪��.
4:void *realloc(void *address, int newsize);> ���·����ڴ棬��չ�ڴ���newsize
*/
void staticMalloc();
void FreeAndRealloc();
int main()
{
    FreeAndRealloc();
    return 0;
}

/*��̬�����ڴ�*/
void staticMalloc() {

    char name[100];
    char *description;
    strcpy(name, "Zara Ali");

    description = malloc(200 * sizeof(char)); /*��̬�����ڴ� Ҳ������ calloc(200, sizeof(char));*/

    if(description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else {
        strcpy( description, "Zara ali a DPS student in class 10th");
    }
    printf("Name = %s\n", name );
    printf("Description: %s\n", description );
}

/*ʹ��realloc  �����ڴ棬 ʹ��free �ͷ��ڴ棨�����˳��Զ��ͷ��ڴ棩*/
void FreeAndRealloc(){

    char name[100];
    char *description;

    strcpy(name, "Zara Ali");

    /* ��̬�����ڴ� */
    description = malloc( 30 * sizeof(char) );
    if( description == NULL )
    {
      fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
      strcpy( description, "Zara ali a DPS student.");
    }

    description = realloc(description, 100 * sizeof(char)); /*��ԭ���ڴ����ٷ��� 100 char*/

    if( description == NULL )
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcat( description, "She is in class 10th");
    }

    printf("Name = %s\n", name );
    printf("Description: %s\n", description );

    /* ʹ�� free() �����ͷ��ڴ� */
    free(description);
}
