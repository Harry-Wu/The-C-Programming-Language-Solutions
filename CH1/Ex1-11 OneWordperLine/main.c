#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    double nc, nl=0, numSpace=0, numTab=0;
    int c;
    bool inSpace = false;
    printf("Please input:\n");
    c = getchar();
    for(nc = 0; c != EOF; nc++)
    {
        if(c == ' ' || c == '\t' || c == '\n')
        {
            if(inSpace == false)
            {
                inSpace = true;
                putchar('\n');
            }
            //else����ӡ�κ��ַ�
        }
        else
        {
           inSpace = false;
           putchar(c);
        }
        c = getchar();  //����ȡ�ַ�
    }
//    printf("In the input sentences:\n", numTab);
    printf("There are(is) %.0f characters.\n", nc);
//    printf("There are(is) %.0f line(s).\n", nl);
//    printf("There are(is) %.0f space(s).\n", numSpace);
//    printf("There are(is) %.0f tab(s).\n", numTab);

    return 0;
}
