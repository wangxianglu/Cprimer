#include <stdio.h>
#include <stdlib.h>

/*
    I/O文件读写
    FILE *fopen( const char * filename, const char * mode );
    filename: 文件 地址
    mode : r> 打开已有的文本文件，允许读取。
           w>打开一个文本文件，允许写入文件。如果文件不存在则新建文件并从文件开头写入内容
           a>打开一个文件，并允许写入文件，如果文件不存在则新建文件，如果存在会在已有内容追加内容
           a>打开一个文件，并允许写入文件，如果文件不存在则新建文件，如果存在会在已有内容追加内容
           r+> 打开一个文本文件，允许读写文件。
           w+>打开一个文本文件，允许读写文件。如果文件已存在，则文件会被截断为零长度，如果文件不存在，则会创建一个新文件。
           a+>打开一个文本文件，允许读写文件。如果文件不存在，则会创建一个新文件。读取会从文件的开头开始，写入则只能是追加模式。
           如果处理的是二进制文件，则需使用下面的访问模式来取代上面的访问模式：
           "rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b"
           为了关闭文件，请使用 fclose( ) 函数。函数的原型如下
        int fclose( FILE *fp );
        如果成功关闭文件，fclose( ) 函数返回零，如果关闭文件时发生错误，函数返回 EOF。
*/
void outPutC();
void inputC();

/*
二进制 I/O 函数
下面两个函数用于二进制输入和输出：
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
    写入文件
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
    fgetc() 函数从 fp 所指向的输入文件中读取一个字符。返回值是读取的字符，如果发生错误则返回 EOF。下面的函数允许您从流中读取一个字符串
    函数 fgets() 从 fp 所指向的输入流中读取 n - 1 个字符。它会把读取的字符串复制到缓冲区 buf，并在最后追加一个 null 字符来终止字符串。
*/
void outPutC() {
    FILE *file = NULL;
    char buff[255];
    file = fopen("/tmp/test.txt", "r");
    fscanf(file, "%s", buff); /*函数来从文件中读取字符串，但是在遇到第一个空格字符时，它会停止读取。*/
    printf("1:%s\n", buff);

    fgets(buff, 255, (FILE*)file);
    printf("2:%s\n", buff);

    fgets(buff, 255, (FILE*)file);
    printf("3:%s\n", buff);

    fclose(file); /*为了关闭文件，请使用 fclose( ) 函数。*/
}



