#include <stdio.h>
#include <stdlib.h>

/*���ָ����� CPP �����е� MAX_ARRAY_LENGTH �滻Ϊ 20��ʹ�� #define ���峣������ǿ�ɶ���*/
#define MAX_ARRAY_LENGTH 20
/*
    #include <stdio.h>
    #include "myheader.h"
��Щָ����� CPP ��ϵͳ���л�ȡ stdio.h��������ı�����ǰ��Դ�ļ��С���һ�и��� CPP �ӱ���Ŀ¼�л�ȡ myheader.h����������ݵ���ǰ��Դ�ļ��С�
*/
/*
#undef  FILE_SIZE
#define FILE_SIZE 42
���ָ����� CPP ȡ���Ѷ���� FILE_SIZE����������Ϊ 42��
*/
/*
#ifndef MESSAGE
   #define MESSAGE "You wish!"
#endif
���ָ����� CPP ֻ�е� MESSAGE δ����ʱ���Ŷ��� MESSAGE��
*/
/*
#ifdef DEBUG
    Your debugging statements here
#endif
���ָ����� CPP ��������� DEBUG����ִ�д�����䡣�ڱ���ʱ��������� gcc ������������ -DDEBUG �����������ָ��ͷǳ����á��������� DEBUG���������ڱ����ڼ���ʱ������رյ��ԡ�
*/
/*
    Ԥ�����
ANSI C ���������ꡣ�ڱ����������ʹ����Щ�꣬���ǲ�ֱͬ���޸���ЩԤ����ĺꡣ
__DATE__	��ǰ���ڣ�һ���� "MMM DD YYYY" ��ʽ��ʾ���ַ�������
__TIME__	��ǰʱ�䣬һ���� "HH:MM:SS" ��ʽ��ʾ���ַ�������
__FILE__	��������ǰ�ļ�����һ���ַ���������
__LINE__	��������ǰ�кţ�һ��ʮ���Ƴ�����
__STDC__	���������� ANSI ��׼����ʱ������Ϊ 1��
*/

int main1()
{
    printf("File :%s\n", __FILE__ );
    printf("Date :%s\n", __DATE__ );
    printf("Time :%s\n", __TIME__ );
    printf("Line :%d\n", __LINE__ );
    printf("ANSI :%d\n", __STDC__ );
    return 0;
}
