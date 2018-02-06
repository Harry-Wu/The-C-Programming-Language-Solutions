#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Audible or visual alert. \a\n");
    //printf("Form feed. \f\n");
    printf("The \"\\c\" will just print \c.\n");
    printf("This escape, \r, moves the active position to the initial position of the current line.\n");
    printf("Vertical tab \v is tricky, as its behaviour is unspecified under certain conditions.\n");

    return 0;
}
