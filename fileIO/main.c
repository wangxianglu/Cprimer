#include <stdio.h>
#include <stdlib.h>

/*
    I/O�ļ���д
    FILE *fopen( const char * filename, const char * mode );
    filename: �ļ� ��ַ
    mode : r> �����е��ı��ļ��������ȡ��
           w>��һ���ı��ļ�������д���ļ�������ļ����������½��ļ������ļ���ͷд������
           a>��һ���ļ���������д���ļ�������ļ����������½��ļ���������ڻ�����������׷������
           a>��һ���ļ���������д���ļ�������ļ����������½��ļ���������ڻ�����������׷������
           r+> ��һ���ı��ļ��������д�ļ���
           w+>��һ���ı��ļ��������д�ļ�������ļ��Ѵ��ڣ����ļ��ᱻ�ض�Ϊ�㳤�ȣ�����ļ������ڣ���ᴴ��һ�����ļ���
           a+>��һ���ı��ļ��������д�ļ�������ļ������ڣ���ᴴ��һ�����ļ�����ȡ����ļ��Ŀ�ͷ��ʼ��д����ֻ����׷��ģʽ��
           ���������Ƕ������ļ�������ʹ������ķ���ģʽ��ȡ������ķ���ģʽ��
           "rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b"
           Ϊ�˹ر��ļ�����ʹ�� fclose( ) ������������ԭ������
        int fclose( FILE *fp );
        ����ɹ��ر��ļ���fclose( ) ���������㣬����ر��ļ�ʱ�������󣬺������� EOF��
*/
void outPutC();
void inputC();

/*
������ I/O ����
���������������ڶ���������������
size_t fread(void *ptr, size_t size_of_elements,
             size_t number_of_elements, FILE *a_file);

size_t fwrite(const void *ptr, size_t size_of_elements,
             size_t number_of_elements, FILE *a_file);
*/
int main()
{
    outPutC();
}

/*
    д���ļ�
*/
void inputC() {
    FILE *fp = NULL;
    fp = fopen("/tmp/test.txt", "w+");
    fputs("This is test for fputs", fp);
    fclose(fp);
    printf("Hello world!\n");
    return 0;
}
/*
    fgetc() ������ fp ��ָ��������ļ��ж�ȡһ���ַ�������ֵ�Ƕ�ȡ���ַ���������������򷵻� EOF������ĺ��������������ж�ȡһ���ַ���
    ���� fgets() �� fp ��ָ����������ж�ȡ n - 1 ���ַ�������Ѷ�ȡ���ַ������Ƶ������� buf���������׷��һ�� null �ַ�����ֹ�ַ�����
*/
void outPutC() {
    FILE *file = NULL;
    char buff[255];
    file = fopen("/tmp/test.txt", "r");
    fscanf(file, "%s", buff); /*���������ļ��ж�ȡ�ַ�����������������һ���ո��ַ�ʱ������ֹͣ��ȡ��*/
    printf("1:%s\n", buff);

    fgets(buff, 255, (FILE*)file);
    printf("2:%s\n", buff);

    fgets(buff, 255, (FILE*)file);
    printf("3:%s\n", buff);

    fclose(file); /*Ϊ�˹ر��ļ�����ʹ�� fclose( ) ������*/
}



