//03_PRANAY GUPTA
#include <stdio.h>
int main()
{
    int n;
    printf("Input upto the table number starting from 1 : ");
    scanf("%d", &n);
    for(int i=1; i<=10; i++) {
        for(int j=1; j<=n; j++){
            printf("%dx%d=%d ", j, i, (j*i));
        }
        printf("\n");
    }
    return 0;
}
