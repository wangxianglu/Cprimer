#include <stdio.h>
#include <stdlib.h>
/*
ǿ������ת��
ǿ������ת���ǰѱ�����һ������ת��Ϊ��һ���������͡����磬�������洢һ�� long ���͵�ֵ��һ���򵥵������У�����Ҫ�� long ����ǿ��ת��Ϊ int ���͡�������ʹ��ǿ������ת�����������ֵ��ʽ�ش�һ������ת��Ϊ��һ������
(type_name) expression
����ת����������ʽ�ģ��ɱ������Զ�ִ�У�Ҳ��������ʽ�ģ�ͨ��ʹ��ǿ������ת���������ָ��
int >unsigned int>long>unsigned long>long long> unsigned long long>float>double>long double;
*/

void typeConversion(int i, char c);
int main()
{
    int sum = 17, count = 5;
    double mean;
    mean = (double)sum / count; /*ǿ������ת��  ǿ������ת������������ȼ����ڳ���*/
    printf("Hello world!%f\n", mean);
    typeConversion(17, 'c'); /* ascii ֵ�� 99 */
    return 0;
}

void typeConversion(int i, char c) {
    int sum = i + c; /*��ִ��ʵ�ʼӷ�����ʱ���� 'c' ��ֵת��Ϊ��Ӧ�� ascii ֵ*/
    printf("sum = %d", sum);
}
