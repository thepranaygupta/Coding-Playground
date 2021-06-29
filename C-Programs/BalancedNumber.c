#include <stdio.h>
#include<string.h>
int main()
{
    int n, lhs=0, rhs=0;
    printf("Enter the Size of Number: ");
    scanf("%d", &n);
    char S[n];
    printf("Enter the Number: ");
    gets(S);
    int mid = sizeof(S)/2;
    for(int i=0; i<sizeof(S); i++) {
        if(i<mid)
            lhs += (int)S[i];
        else if(i==mid) {}
        else
            rhs += (int)S[i];
    }
    if(lhs==rhs)
      printf("The Number is balanced.");
    else
      printf("The Number is not balanced.");
}
