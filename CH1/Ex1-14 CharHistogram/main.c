/*
��ӡ�����в�ͬ�ַ���Ƶ��ֱ��ͼ
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define MAXHIST 40
#define MAXCHAR 128  //ͳ�Ƶ�����ַ�����

int main()
{

    int c, i;  //ncΪÿ���µ��ʵĳ���
//    bool inSpace = false;  //�ж�ȡ���ַ��Ƿ��ڵ�����
    int len;  //length of each bar, len=(charNum[i]/maxvalue)*MAXHIST
    int maxvalue;  //charNum[]�����ֵ
    int charNum[MAXCHAR];  //ͳ��ÿ���ַ�������

    for (i = 0; i < MAXCHAR; i++)
        charNum[i] = 0;

    printf("Please input:\n");
    while ((c = getchar()) != EOF)
    {
        if(c < MAXCHAR)
            charNum[c]++;  //charNum[]��0��ʼ�洢ASCIIֵΪ0���ַ�
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
            printf("%3d���ַ� %c ��%5d��: ", i, i, charNum[i]);
        else
            printf("%3d���ַ�   ��%5d��: ", i, charNum[i]);
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
