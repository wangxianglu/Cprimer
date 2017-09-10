#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*定义共同体，共同体表示多个数据类型公用一个数据存储地址，他的最大存储大小是由成员的最大字节数决定*/
/* 如下 Data的最大 存储字节是 20*/
union Data {
    int i;
    float f;
    char str[20]; /* 最大字节数*/
};
int main()
{
    union Data data;
    printf("data 占用位置 %d\n", sizeof(data));

    data.i = 1;
    printf("%d\n", data.i);  /* 当只使用i内存是 i 是正确的*/
    data.f = 10;
    strcpy(data.str, "C primer plus");

    printf("%d\n", data.i);  /* 输出错误，str 已经占用了 内存*/
    printf("%f\n", data.f);
    printf("%s\n", data.str);
    return 0;
}
