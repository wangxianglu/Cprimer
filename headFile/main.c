#include <stdio.h>
#include <stdlib.h>
/*
#include <file> 这种形式用于引用系统头文件。它在系统目录的标准列表中搜索名为 file 的文件。在编译源代码时，您可以通过 -I 选项把目录前置在该列表前。
#include "file" 这种形式用于引用用户头文件。它在包含当前文件的目录中搜索名为 file 的文件。在编译源代码时，您可以通过 -I 选项把目录前置在该列表前。
如果一个头文件被引用两次，编译器会处理两次头文件的内容，这将产生错误。为了防止这种情况，标准的做法是把文件的整个内容放在条件编译语句中，如下：
#ifndef HEADER_FILE
#define HEADER_FILE

the entire header file file

#endif

有条件引用
有时需要从多个不同的头文件中选择一个引用到程序中。例如，需要指定在不同的操作系统上使用的配置参数。您可以通过一系列条件来实现这点，如下：
#if SYSTEM_1
   # include "system_1.h"
#elif SYSTEM_2
   # include "system_2.h"
#elif SYSTEM_3
   ...
#endif
但是如果头文件比较多的时候，这么做是很不妥当的，预处理器使用宏来定义头文件的名称。这就是所谓的有条件引用。它不是用头文件的名称作为 #include 的直接参数，您只需要使用宏名称代替即可：
#define SYSTEM_H "system_1.h"
 ...
 #include SYSTEM_H
 SYSTEM_H 会扩展，预处理器会查找 system_1.h，就像 #include 最初编写的那样。SYSTEM_H 可通过 -D 选项被您的 Makefile 定义。
*/
int main()
{
    printf("Hello world!\n");
    return 0;
}

int functionC(int, ...) {

}
