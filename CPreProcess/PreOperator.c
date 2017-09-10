#include <stdio.h>
/*
预处理器运算符
C 预处理器提供了下列的运算符来帮助您创建宏：
宏延续运算符（\）
一个宏通常写在一个单行上。但是如果宏太长，一个单行容纳不下，则使用宏延续运算符（\）。例如：
#define  message_for(a, b)  \
    printf(#a " and " #b ": We love you!\n")
字符串常量化运算符（#）
*/
#define message_for(a,b)\
                printf(#a " and " #b ":we love you ! \n")
/*标记粘贴运算符（##）*/
#define tokenpaster(n) printf("token" #n "=%d", token##n)
/*
defined() 运算符预处理器
defined 运算符是用在常量表达式中的，用来确定一个标识符是否已经使用 #define 定义过。如果指定的标识符已定义，则值为真（非零）。如果指定的标识符未定义，则值为假（零）
*/
#if !defined (MESSAGE)
    #define MESSAGE "you wish"
#endif
/*
参数化宏 宏名称和左圆括号之间不允许有空格   以下等同于
int square(int x) {
   return x * x;
}
*/
#define square(x) ((x) * (x))
int main() {
    message_for("aaff", CUSTOM); /*不需要是字符串“” 直接输入字符或文字也没问题*/
    int token34 = 40;
    tokenpaster(34); /*编译器实际产出 printf ("token34 = %d", token34);*/
    printf("Here is the message: %s\n", MESSAGE);
    return 0;
}
