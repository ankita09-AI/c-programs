#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    float total;
    printf("enter marks of physics");
    scanf("%d", &physics);
    printf("enter marks of chemistry");
    scanf("%d", &chemistry);
    printf("enter marks of maths");
    scanf("%d", &maths);
    total = physics + chemistry + maths / 3;

   // if( (total>40) || physics >33 || chemistry >33 || maths>33)//or ka matlab hota h ek v conditin true hogi toh result true hoga ryt yani ek v condition true to banda pass jo ki nhi krna h age ek v uske 30 aa v jae aur dusre me agr 33 aa jate h toh wo pass ho jaega isliye this is wrong
    if( (total<40) || physics <33 || chemistry <33 || maths<33){
        printf("Your total percentage is%f and you are fail",total);
    }
    else
    {
        printf("your total percentage is %f and you are pass",total);
    }
    return 0;
}