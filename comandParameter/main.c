#include <stdio.h>
#include <stdlib.h>

/*
命令行参数, 执行程序时可以从命令行传值给C程序，这些值被称为命令行参数， 命令行参数是使用main函数参数来处理的
*/
/*argv[0] 存储程序的名称，argv[1] 是一个指向第一个命令行参数的指针，*argv[n] 是最后一个参数。如果没有提供任何参数，argc 将为 1，否则，如果传递了一个参数，argc 将被设置为 2。
多个命令行参数之间用空格分隔，但是如果参数本身带有空格，那么传递参数的时候应把参数放置在双引号 "" 或单引号 '' 内部
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
