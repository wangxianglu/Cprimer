#include <stdio.h>
#include <stdlib.h>

/*
�����в���, ִ�г���ʱ���Դ������д�ֵ��C������Щֵ����Ϊ�����в����� �����в�����ʹ��main���������������
*/
/*argv[0] �洢��������ƣ�argv[1] ��һ��ָ���һ�������в�����ָ�룬*argv[n] �����һ�����������û���ṩ�κβ�����argc ��Ϊ 1���������������һ��������argc ��������Ϊ 2��
��������в���֮���ÿո�ָ��������������������пո���ô���ݲ�����ʱ��Ӧ�Ѳ���������˫���� "" ������ '' �ڲ�
*/

int main(int argc, char *argv[])
{
   if( argc == 2 )
   {
      printf("The argument supplied is %s\n", argv[1]);
   }
   else if( argc > 2 )
   {
      printf("Too many arguments supplied.\n");
   }
   else
   {
      printf("One argument expected.\n");
   }

   return 0;
}
