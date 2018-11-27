/*
编写一个程序以确定分别由signed及unsigned 限定的char、short、
int与long类型变量的取值范围。采用打印标准头文件中的相应值以及直接计算两种方式实
现。后一种方法的实现较困难一些，因为要确定各种浮点类型的取值范围
*/
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>


/* print longest input line */
int main()
{
    //signed types
    printf("signed char min * %d\n", SCHAR_MIN);
    printf("signed char max * %d\n", SCHAR_MAX);
    printf("signed short min * %d\n", SHRT_MIN);
    printf("signed short max * %d\n", SHRT_MAX);
    printf("signed int min * %d\n", INT_MIN);
    printf("signed int max * %d\n", INT_MAX);
    printf("signed long min * %d\n", LONG_MIN);
    printf("signed long max * %d\n", LONG_MAX);
    //unsigned types
    printf("unsigned char max * %d\n", UCHAR_MAX);
    printf("unsigned short max * %d\n", USHRT_MAX);
    printf("unsigned short max * %d\n", 4294900000);  //%d表示signed int，高位是1的话会被当作负数
    printf("unsigned int max * %u\n", UINT_MAX);
    printf("unsigned long max * %lu\n", ULONG_MAX);
    return 0;
}

