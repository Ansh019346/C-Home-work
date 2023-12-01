#include<stdio.h>
int main()
{
    int yr;
    printf("enter the year = ");
    scanf("%d",&yr);

    if(yr%4==0)
    {
        printf("the year entered is leap year");
    }
    else
    {
        printf("the year entered is not a leap year");
    }

    return 0;
}
