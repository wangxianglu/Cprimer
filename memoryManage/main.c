#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
动态内存管理, C 为内存分配和管理提供的函数在<stdlib.h> 头文件中  void* : 任意类型的指针
1:void *calloc(int number, int size); >在内存中动态分配num个长度为size的连续空间，并将每个字节初始化为0。所以他分配了num*size个字节长度的空间，每个字节的值是0
2：void free(void *address); >释放address 所指向的内存块，释放的是动态分配的内存空间
3：void *malloc(int num); > 在堆区分配一块制定大小的内存空间，用来存放数据.这块内存空间在函数执行完后不会被初始化, 他们的值是未知的.
4:void *realloc(void *address, int newsize);> 重新分配内存，扩展内存至newsize
*/
void staticMalloc();
void FreeAndRealloc();
int main()
{
    FreeAndRealloc();
    return 0;
}

/*动态分配内存*/
void staticMalloc() {

    char name[100];
    char *description;
    strcpy(name, "Zara Ali");

    description = malloc(200 * sizeof(char)); /*动态分配内存 也可以用 calloc(200, sizeof(char));*/

    if(description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else {
        strcpy( description, "Zara ali a DPS student in class 10th");
    }
    printf("Name = %s\n", name );
    printf("Description: %s\n", description );
}

/*使用realloc  扩大内存， 使用free 释放内存（程序退出自动释放内存）*/
void FreeAndRealloc(){

    char name[100];
    char *description;

    strcpy(name, "Zara Ali");

    /* 动态分配内存 */
    description = malloc( 30 * sizeof(char) );
    if( description == NULL )
    {
      fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
      strcpy( description, "Zara ali a DPS student.");
    }

    description = realloc(description, 100 * sizeof(char)); /*在原有内存上再分配 100 char*/

    if( description == NULL )
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcat( description, "She is in class 10th");
    }

    printf("Name = %s\n", name );
    printf("Description: %s\n", description );

    /* 使用 free() 函数释放内存 */
    free(description);
}
