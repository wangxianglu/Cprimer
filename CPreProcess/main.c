#include <stdio.h>
#include <stdlib.h>

/*这个指令告诉 CPP 把所有的 MAX_ARRAY_LENGTH 替换为 20。使用 #define 定义常量来增强可读性*/
#define MAX_ARRAY_LENGTH 20
/*
    #include <stdio.h>
    #include "myheader.h"
这些指令告诉 CPP 从系统库中获取 stdio.h，并添加文本到当前的源文件中。下一行告诉 CPP 从本地目录中获取 myheader.h，并添加内容到当前的源文件中。
*/
/*
#undef  FILE_SIZE
#define FILE_SIZE 42
这个指令告诉 CPP 取消已定义的 FILE_SIZE，并定义它为 42。
*/
/*
#ifndef MESSAGE
   #define MESSAGE "You wish!"
#endif
这个指令告诉 CPP 只有当 MESSAGE 未定义时，才定义 MESSAGE。
*/
/*
#ifdef DEBUG
    Your debugging statements here
#endif
这个指令告诉 CPP 如果定义了 DEBUG，则执行处理语句。在编译时，如果您向 gcc 编译器传递了 -DDEBUG 开关量，这个指令就非常有用。它定义了 DEBUG，您可以在编译期间随时开启或关闭调试。
*/
/*
    预定义宏
ANSI C 定义了许多宏。在编程中您可以使用这些宏，但是不同直接修改这些预定义的宏。
__DATE__	当前日期，一个以 "MMM DD YYYY" 格式表示的字符常量。
__TIME__	当前时间，一个以 "HH:MM:SS" 格式表示的字符常量。
__FILE__	这会包含当前文件名，一个字符串常量。
__LINE__	这会包含当前行号，一个十进制常量。
__STDC__	当编译器以 ANSI 标准编译时，则定义为 1。
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
