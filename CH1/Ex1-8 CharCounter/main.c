#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nc, nl, numSpace, numTab;
    int c;
    printf("Please input:\n");
    c = getchar();
    for(nc = 0; c != EOF; nc++)
    {
        if(c == '\n') nl++;
        else if(c == ' ') numSpace++;
        else if(c=='\t') numTab++;
        c = getchar();
    }
    printf("In the input sentences:\n", numTab);
    printf("There are(is) %.0f characters.\n", nc);
    printf("There are(is) %.0f line(s).\n", nl);
    printf("There are(is) %.0f space(s).\n", numSpace);
    printf("There are(is) %.0f tab(s).\n", numTab);

    return 0;
}
