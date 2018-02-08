#include <stdio.h>
#include <stdlib.h>


float CelsiusToFahr(float celsius);
int main()
{
    int lower, upper, step;
    float fahr, celsius;
    celsius = lower = 0;
    upper = 300;
    step = 20;

    printf(" C¡ã  F¡ã\n");
    while (celsius <= upper)
    {
        fahr = CelsiusToFahr(celsius);
        printf("%-3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}

float CelsiusToFahr(float celsius)
{
    return (9.0/5.0)*celsius+32;
}
