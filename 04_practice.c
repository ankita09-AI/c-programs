#include<stdio.h>
//calculating si for the given principal amount,rate and years//
int main(){
    int p,r,t,si;
    printf("enter principal amount:");
    scanf("%d",&p);
    printf("enter rate of interest");
    scanf("%d",&r);
    printf("enter time of the interest");
    scanf("%d",&t);
    si=(p*r*t)/100;
    printf("si is%d",si);
    return 0;
}