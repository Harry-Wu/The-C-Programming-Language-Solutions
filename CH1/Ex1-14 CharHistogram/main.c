/*
打印输入中不同字符的频度直方图
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define MAXHIST 40
#define MAXCHAR 128  //统计的最多字符数量

int main()
{

    int c, i;  //nc为每个新单词的长度
//    bool inSpace = false;  //判断取的字符是否在单词外
    int len;  //length of each bar, len=(charNum[i]/maxvalue)*MAXHIST
    int maxvalue;  //charNum[]中最大值
    int charNum[MAXCHAR];  //统计每种字符的数量

    for (i = 0; i < MAXCHAR; i++)
        charNum[i] = 0;

    printf("Please input:\n");
    while ((c = getchar()) != EOF)
    {
        if(c < MAXCHAR)
            charNum[c]++;  //charNum[]从0开始存储ASCII值为0的字符
    }

    maxvalue = 0;
    for (i = 0; i < MAXCHAR; i++)
    {
        if (charNum[i] > maxvalue)
            maxvalue = charNum[i];
    }
    for (i = 0; i < MAXCHAR; i++)
    {
        if(isprint(i))
            printf("%3d号字符 %c 有%5d个: ", i, i, charNum[i]);
        else
            printf("%3d号字符   有%5d个: ", i, charNum[i]);
        if(charNum[i] > 0)
        {
            if((len = charNum[i] * MAXHIST / maxvalue) <= 0)
                len = 1;
        }
        else
            len = 0;
        while (len > 0)
        {
            putchar('#');
            len--;
        }
        putchar('\n');
    }

    return 0;
}
