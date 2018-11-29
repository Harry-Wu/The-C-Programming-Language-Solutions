/*
在不使用运算符&&或||的条件下编写一个与上面的for 循环语句等价的循
环语句。
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

