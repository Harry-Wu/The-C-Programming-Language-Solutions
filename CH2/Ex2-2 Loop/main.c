/*
�ڲ�ʹ�������&&��||�������±�дһ���������for ѭ�����ȼ۵�ѭ
����䡣
*/
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
//#include <limits.h>
#include <stdbool.h>
int lim = 10;
_Bool isChar = true;

/* print longest input line */
int main()
{
    int i = 0;
    char c, s[lim];
    printf("Please input something:\n");
    while(isChar)
    {
        if(i >=lim-1)
        {
            isChar = false;
            s[lim-1] = '\0';
        }
        else if ((c=getchar()) == '\n')
            isChar = false;
        else if(c == EOF)
            isChar = false;
        else
        {
            s[i] = c;
            ++i;
        }
    }

    printf("s[%d] value is %s", lim, s);
    return 0;
}

