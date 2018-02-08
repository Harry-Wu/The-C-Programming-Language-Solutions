/*
��ֱ��ӡ�����е��ʳ��ȵ�ֱ��ͼ
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXHIST 50
#define MAXWORDLEN 11  //ͳ�Ƶ���ĵ���

int main()
{

    int c, i, j, nc;  //ncΪÿ���µ��ʵĳ���
    bool inSpace = false;  //�ж�ȡ���ַ��Ƿ��ڵ�����
    int len;  //length of each bar, len=(wordLen[i]/maxvalue)*MAXHIST
    int maxvalue;  //wordLen[]�����ֵ
    int ovflow;  //����MAXWORDLEN�ַ����ȵĵ��ʵ�����
    int wordLen[MAXWORDLEN];  //ͳ��ÿ���ֳ��ĵ��ʵ�����,wordLen[0]��ʾ1���ַ��ĵ��ʳ��ֵ�����

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
                    wordLen[nc-1]++;  //wordLen[nc-1]�����ַ�����Ϊnc�ĵ�������
                else ovflow;
            nc = 0;
        }
        else if(inSpace == true)  //û�������ո��,����֮ǰ���ڵ�����,�����������ĵ��ʵ�һ���ַ�
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
    for (i = MAXHIST; i > 0; i--)
    {
        printf("         ");
        for(j = 0; j < MAXWORDLEN; j++)
        {
            if((wordLen[j] * MAXHIST / maxvalue / i) >= 1)
                printf("  #  ");
            else
                printf("     ");
        }
        putchar('\n');
    }

    printf("wordLen: ");
    for(i = 0; i < MAXWORDLEN; i++)
    {
        printf("%4d ", i+1);
    }
    putchar('\n');
    printf("Numbers: ");
    for(i = 0; i < MAXWORDLEN; i++)
    {
        printf("%4d ", wordLen[i]);
    }
    putchar('\n');

    if(ovflow > 0)
        printf("����%d�ַ��ĵ�����%d��.\n", MAXWORDLEN, ovflow);

    return 0;
}
