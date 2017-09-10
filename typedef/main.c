#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    typedef 关键字 ：用它为类型取一个新的名字
    typedef unsigned chat BYTE;  单字节数定义 名字BYTE

*/
/*
    typedef 和 #define 作用类似不同点在于
    1:typedef 仅限于为类型定义符号名称，#define 不仅可以为类型定义别名，也能为数值定义别名，比如您可以定义 1 为 ONE。
    2:typedef 是由编译器执行解释的，#define 语句是由预编译器进行处理的。
*/
/*定义结构体Books*/
#define TRUE 1
 typedef struct Books {
    char title[50];
    char author[50];
} Book;
int main()
{
    Book book;  /*和普通没有typedef 相比 不用使用 struct关键字声明*/
    strcpy(book.title, "C primer plus");
    strcpy(book.author, "wang");
    printf("%s\n", book.title);
    printf("%s\n", book.author);
    printf("%d", TRUE); //define 定义TRUE 为数字1
    return 0;
}
