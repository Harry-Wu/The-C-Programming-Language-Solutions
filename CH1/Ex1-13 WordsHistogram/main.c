#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXHIST 50
#define MAXWORDLEN 11  //统计的最长的单词

int main()
{

    int c, i, nc;  //nc为每个新单词的长度
    bool inSpace = false;  //判断取的字符是否在单词外
    int len;  //length of each bar, len=(wordLen[i]/maxvalue)*MAXHIST
    int maxvalue;  //wordLen[]中最大值
    int ovflow;  //超过MAXWORDLEN字符长度的单词的数量
    int wordLen[MAXWORDLEN];  //统计每种字长的单词的数量,wordLen[0]表示1个字符的单词出现的数量

    nc = ovflow = 0;
    for (i = 0; i < MAXWORDLEN; i++)
        wordLen[i] = 0;

    printf("Please input:\n");
    while ((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t' || c == '\n')
        {
            inSpace = true;
            if (nc > 0)
                if(nc <= MAXWORDLEN)
                    wordLen[nc-1]++;  //wordLen[nc-1]代表字符长度为nc的单词数量
                else ovflow;
            nc = 0;
        }
        else if(inSpace == true)  //没有遇到空格等,并且之前是在单词外,表明是遇到的单词第一个字符
        {
           inSpace = false;
           nc = 1;
        }
        else
            nc++;
    }
    maxvalue = 0;
    for (i = 0; i < MAXWORDLEN; i++)
    {
        if (wordLen[i] > maxvalue)
            maxvalue = wordLen[i];
    }
    for (i = 0; i < MAXWORDLEN; i++)
    {
        printf("字长为%2d的单词有%5d个: ", i+1, wordLen[i]);
        if(wordLen[i] > 0)
        {
            if((len = wordLen[i] * MAXHIST / maxvalue) <= 0)
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
    if(ovflow > 0)
        printf("超过%d字符的单词有%d个.\n", MAXWORDLEN, ovflow);

    return 0;
}
