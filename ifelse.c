#include <stdio.h>

int main()
{//age=50 is an assignment operator or koi v non zero value is true in c therefore output is half century//
    int age;
    int vippass=0;
    vippass=1;
    printf("enter your age");
    scanf("%d", &age);
    if (age >= 90)
    {
        printf("you are above 90,you cannot drive");
    }
    //if(age=50)
    if (age==50){
        printf("half century\n");
    }
    if((age<=70 && age>=18) || !(vippass==0))//!=logical operator 'not' bs ulta kr de rha h this means ki yaha iska mtlb vippass=1 h
    {
       printf("you are above 18 and below 70,you can drive\n");
    }
    else{
        printf("you cannot drive");
    }
    return 0;
}