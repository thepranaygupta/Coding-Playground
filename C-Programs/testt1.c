#include<stdio.h>
int main() {
    int a, b, res=0;
    char ch;
    printf("Enter two Numbers: ");
    scanf("%d%d", &a, &b);
    printf("Enter your Choice: ");
    scanf(" %c", &ch);
    if(ch=='a')
        printf("Addition of two Numbers is = %d", a+b);
    else if(ch=='s')
        printf("Subtraction of two Numbers is = %d", a-b);
    else if(ch=='m')
        printf("Multiplication of two Numbers is = %d", a*b);
    else if(ch=='d')
        printf("Division of two Numbers is = %d", a/b);
    else
        printf("Invalid Input");
    return 0;
}

