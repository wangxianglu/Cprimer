#include <stdio.h>
/*
Ԥ�����������
C Ԥ�������ṩ�����е�������������������꣺
�������������\��
һ����ͨ��д��һ�������ϡ����������̫����һ���������ɲ��£���ʹ�ú������������\�������磺
#define  message_for(a, b)  \
    printf(#a " and " #b ": We love you!\n")
�ַ����������������#��
*/
#define message_for(a,b)\
                printf(#a " and " #b ":we love you ! \n")
/*���ճ���������##��*/
#define tokenpaster(n) printf("token" #n "=%d", token##n)
/*
defined() �����Ԥ������
defined ����������ڳ������ʽ�еģ�����ȷ��һ����ʶ���Ƿ��Ѿ�ʹ�� #define ����������ָ���ı�ʶ���Ѷ��壬��ֵΪ�棨���㣩�����ָ���ı�ʶ��δ���壬��ֵΪ�٣��㣩
*/
#if !defined (MESSAGE)
    #define MESSAGE "you wish"
#endif
/*
�������� �����ƺ���Բ����֮�䲻�����пո�   ���µ�ͬ��
int square(int x) {
   return x * x;
}
*/
#define square(x) ((x) * (x))
int main() {
    message_for("aaff", CUSTOM); /*����Ҫ���ַ������� ֱ�������ַ�������Ҳû����*/
    int token34 = 40;
    tokenpaster(34); /*������ʵ�ʲ��� printf ("token34 = %d", token34);*/
    printf("Here is the message: %s\n", MESSAGE);
    return 0;
}
