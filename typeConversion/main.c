#include <stdio.h>
#include <stdlib.h>
/*
强制类型转换
强制类型转换是把变量从一种类型转换为另一种数据类型。例如，如果您想存储一个 long 类型的值到一个简单的整型中，您需要把 long 类型强制转换为 int 类型。您可以使用强制类型转换运算符来把值显式地从一种类型转换为另一种类型
(type_name) expression
类型转换可以是隐式的，由编译器自动执行，也可以是显式的，通过使用强制类型转换运算符来指定
int >unsigned int>long>unsigned long>long long> unsigned long long>float>double>long double;
*/

void typeConversion(int i, char c);
int main()
{
    int sum = 17, count = 5;
    double mean;
    mean = (double)sum / count; /*强制类型转换  强制类型转换运算符的优先级大于除法*/
    printf("Hello world!%f\n", mean);
    typeConversion(17, 'c'); /* ascii 值是 99 */
    return 0;
}

void typeConversion(int i, char c) {
    int sum = i + c; /*在执行实际加法运算时，把 'c' 的值转换为对应的 ascii 值*/
    printf("sum = %d", sum);
}
