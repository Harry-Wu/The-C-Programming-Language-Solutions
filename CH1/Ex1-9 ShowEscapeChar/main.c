#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    double nc, nl=0, numSpace=0, numTab=0;
    int c;
    bool isSpace;
    printf("Please input:\n");
    c = getchar();
    for(nc = 0; c != EOF; nc++)
    {
        if(c == '\b') printf("\\b");
        else if(c == '\t')
        {
            printf("\\t");
            numTab++;
        }
        else putchar(c);
        if(c == ' ') isSpace = true; numSpace++;
        if(c == '\n') nl++;
        do
        {
            c = getchar();  //继续取字符
        }
        while((c==' ') && (isSpace == true));  //如果这次取的是空格并且上一个字符是空格
        isSpace = false;
    }
    printf("In the input sentences:\n", numTab);
    printf("There are(is) %.0f characters.\n", nc);
    printf("There are(is) %.0f line(s).\n", nl);
    printf("There are(is) %.0f space(s).\n", numSpace);
    printf("There are(is) %.0f tab(s).\n", numTab);

    return 0;
}
