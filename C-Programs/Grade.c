#include <stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    if(m<40)
      printf("Fail");
    else if(m>=40 && m<=49)
      printf("D");
    else if(m>=50 && m<=59)
      printf("C");
    else if(m>=60 && m<=69)
      printf("B");
    else if(m>=70 && m<=79)
      printf("A");
    else if(m>=80 && m<=89)
      printf("E");
    else if(m>=90 && m<=100)
      printf("O");
    return 0;
}
