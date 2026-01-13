#include <stdio.h>
//area of circle and volume of cylinder//
int main()
{
    int r,h;
    float area;
    float volume;
    printf("enter radius is:");
    scanf("%d", &r);
    area = 3.14 * r * r;
    printf("area of the circle is%2f\n", area);
    printf("enter height:");
    scanf("%d",&h);
    volume=3.14*r*r*h;
    printf("volume of cylinder is:%2f\n",volume);
    return 0;
}