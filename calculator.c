#include<stdio.h>

int main()
{
    int a,b,choice;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("1 Addition\n2 Subtraction\n3 Multiplication\n4 Division\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    if(choice==1)
        printf("Result = %d",a+b);

    else if(choice==2)
        printf("Result = %d",a-b);

    else if(choice==3)
        printf("Result = %d",a*b);

    else if(choice==4)
        printf("Result = %d",a/b);

    else
        printf("Invalid choice");

    return 0;
}