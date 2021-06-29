#include<stdio.h>
#include<math.h>
int main()
{
    int lim,i,j,a=0,b=1,c=0;
    printf("Input number of terms to display : ");
    scanf("%d",&lim);
    printf("Here is the Fibonacci series upto %d terms: ",lim);
    for(i=1;i<=lim;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    printf("\nThe Prime Fibonacci numbers are: ");
    a=0,b=1,c=0;
    for(i=1;i<=lim;i++)
    {
        int flag=1;
        if((a==2)||(a>=2&&a%2!=0))
        {
            for(j=2;j<=sqrt(a);j++)
            {
                if(a%j==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                printf("[%d] ",a);
        }
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
