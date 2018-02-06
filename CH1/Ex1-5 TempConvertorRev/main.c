#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lower, upper, step;
    float fahr, celsius;
    lower = 0;
    upper = 300;
    //step = 20;

    printf(" F¡ã  C¡ã\n");
    for (fahr = upper; fahr >= lower; fahr = fahr - 20)
    {
        celsius = (5.0/9.0)*(fahr-32);
        printf("%-3.0f %6.1f\n", fahr, celsius);
        //fahr = fahr + step;
    }
    return 0;
}
