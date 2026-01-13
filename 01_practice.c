#include <stdio.h>
//area of rectangle//
int main()
{
    int breadth, length, area;
    printf("enter breadth");
    scanf("%d",&breadth);
    printf("enter length");
    scanf("%d",&length);
    area = length*breadth;
    printf("area of rectangle is %d", area);
    return 0;
}