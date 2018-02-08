#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXHIST 50
#define MAXWORDLEN 11  //ͳ�Ƶ���ĵ���

int main()
{

    int c, i, nc;  //ncΪÿ���µ��ʵĳ���
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
    for (i = 0; i < MAXWORDLEN; i++)
    {
        printf("�ֳ�Ϊ%2d�ĵ�����%5d��: ", i+1, wordLen[i]);
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
        printf("����%d�ַ��ĵ�����%d��.\n", MAXWORDLEN, ovflow);

    return 0;
}
