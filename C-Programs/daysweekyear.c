#include<stdio.h>

int main()
{
    int years;
    int weeks;
    int x;
    int days;
    printf("Enter the days:");
    scanf("%d",&x);
    years=x/365;
    weeks=x%365/7;
    days=x%365%7;
    printf("years:%d\n",years);
    printf("weeks:%d\n",weeks);
    printf("days:%d\n",days);
    return 0;
}
