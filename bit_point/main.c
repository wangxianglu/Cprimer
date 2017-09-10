#include <stdio.h>
#include <stdlib.h>

/*
    c 位域，声明结构如下
    struct {
       type [member_name] : width;
    };
    type : 整数类型，决定了如何解释位域中的值。类型可以是 整形，有符号整形，无符号整型
    member——name： 位域的名称
    width： 位于中位的数量。 宽度必须小于等于指定类型位宽度
*/

/* 定义一般的结构*/
struct {
    unsigned int weidth; /*普通结构中int 占用的字节（2个或4 个字节）16位 或 32位*/
    unsigned int height;
} status1;

/*定义位域结构 */
struct {
    unsigned int width:1; /*定义结构 width 只占1位*/
    unsigned int height:1; /*height 只占用1位*/
} status2;


int main()
{
    printf("普通结构体占用内存 :%d\n", sizeof(status1));
    printf("公用体占用内存 :%d\n", sizeof(status2));
    status2.width = 6; /*错误示例 width 定义的位数只有1位， 不存存储大于1的数字*/
    printf("%d\n", status2.width);
    return 0;
}
