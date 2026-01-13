#include <stdio.h>
//converting temperature in celsius to fahrenheit//
int main()
{
    float celsius,fahrenheit;
    printf("enter temperature in celsius:");
    scanf("%f", &celsius);
    fahrenheit = (celsius*9/5)+32;
    printf("temperature in fahrenheit is %2f", fahrenheit);
    return 0;
}