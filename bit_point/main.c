#include <stdio.h>
#include <stdlib.h>

/*
    c λ�������ṹ����
    struct {
       type [member_name] : width;
    };
    type : �������ͣ���������ν���λ���е�ֵ�����Ϳ����� ���Σ��з������Σ��޷�������
    member����name�� λ�������
    width�� λ����λ�������� ��ȱ���С�ڵ���ָ������λ���
*/

/* ����һ��Ľṹ*/
struct {
    unsigned int weidth; /*��ͨ�ṹ��int ռ�õ��ֽڣ�2����4 ���ֽڣ�16λ �� 32λ*/
    unsigned int height;
} status1;

/*����λ��ṹ */
struct {
    unsigned int width:1; /*����ṹ width ֻռ1λ*/
    unsigned int height:1; /*height ֻռ��1λ*/
} status2;


int main()
{
    printf("��ͨ�ṹ��ռ���ڴ� :%d\n", sizeof(status1));
    printf("������ռ���ڴ� :%d\n", sizeof(status2));
    status2.width = 6; /*����ʾ�� width �����λ��ֻ��1λ�� ����洢����1������*/
    printf("%d\n", status2.width);
    return 0;
}
