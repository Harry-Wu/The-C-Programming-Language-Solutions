#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    printf("Please input a character:");
    c = getchar();
    printf("The value of getchar() != EOF is %d\n", (c!=EOF));
    printf("The value of EOF is %d\n", EOF);
    return 0;
}
