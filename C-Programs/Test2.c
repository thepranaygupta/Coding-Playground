#include <stdio.h>
int main()
{
    char s1[] = {"Hello"};
    int length=0;
    for(int i = 0; s1[i]!="\0"; ++i)
      length++;
    printf("Length = %d", length);
    return 0;
}