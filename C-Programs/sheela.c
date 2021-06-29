#include <stdio.h>
int main()
{
    int a,b,c,total;

    printf("Enter the marks in physics\n");
    scanf("%d",&a);
    printf("Enter the marks in maths\n");
    scanf("%d",&b);
    printf("Enter the marks in chemistry\n");
    scanf("%d",&c);
    total=a+b+c;
    printf("Total marks=%d\n",total);
    return 0;
}
