#include <stdio.h>
#include <stdlib.h>
/*
#include <file> ������ʽ��������ϵͳͷ�ļ�������ϵͳĿ¼�ı�׼�б���������Ϊ file ���ļ����ڱ���Դ����ʱ��������ͨ�� -I ѡ���Ŀ¼ǰ���ڸ��б�ǰ��
#include "file" ������ʽ���������û�ͷ�ļ������ڰ�����ǰ�ļ���Ŀ¼��������Ϊ file ���ļ����ڱ���Դ����ʱ��������ͨ�� -I ѡ���Ŀ¼ǰ���ڸ��б�ǰ��
���һ��ͷ�ļ����������Σ��������ᴦ������ͷ�ļ������ݣ��⽫��������Ϊ�˷�ֹ�����������׼�������ǰ��ļ����������ݷ���������������У����£�
#ifndef HEADER_FILE
#define HEADER_FILE

the entire header file file

#endif

����������
��ʱ��Ҫ�Ӷ����ͬ��ͷ�ļ���ѡ��һ�����õ������С����磬��Ҫָ���ڲ�ͬ�Ĳ���ϵͳ��ʹ�õ����ò�����������ͨ��һϵ��������ʵ����㣬���£�
#if SYSTEM_1
   # include "system_1.h"
#elif SYSTEM_2
   # include "system_2.h"
#elif SYSTEM_3
   ...
#endif
�������ͷ�ļ��Ƚ϶��ʱ����ô���Ǻܲ��׵��ģ�Ԥ������ʹ�ú�������ͷ�ļ������ơ��������ν�����������á���������ͷ�ļ���������Ϊ #include ��ֱ�Ӳ�������ֻ��Ҫʹ�ú����ƴ��漴�ɣ�
#define SYSTEM_H "system_1.h"
 ...
 #include SYSTEM_H
 SYSTEM_H ����չ��Ԥ����������� system_1.h������ #include �����д��������SYSTEM_H ��ͨ�� -D ѡ����� Makefile ���塣
*/
int main()
{
    printf("Hello world!\n");
    return 0;
}

int functionC(int, ...) {

}
