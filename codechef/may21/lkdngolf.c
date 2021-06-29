#include <stdio.h>
int main()
{
	int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        long long int N,x,k;
        scanf("%lld%lld%lld",&N,&x,&k);
        if(x%k==0 || x==(N+1) || (N+1-x)%k==0) 
            printf("YES\n");
        else 
            printf("NO\n");
    }
	return 0;
}