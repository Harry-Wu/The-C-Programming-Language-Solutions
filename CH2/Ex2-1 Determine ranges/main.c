/*
��дһ��������ȷ���ֱ���signed��unsigned �޶���char��short��
int��long���ͱ�����ȡֵ��Χ�����ô�ӡ��׼ͷ�ļ��е���Ӧֵ�Լ�ֱ�Ӽ������ַ�ʽʵ
�֡���һ�ַ�����ʵ�ֽ�����һЩ����ΪҪȷ�����ָ������͵�ȡֵ��Χ
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
    printf("unsigned short max * %d\n", 4294900000);  //%d��ʾsigned int����λ��1�Ļ��ᱻ��������
    printf("unsigned int max * %u\n", UINT_MAX);
    printf("unsigned long max * %lu\n", ULONG_MAX);
    return 0;
}

