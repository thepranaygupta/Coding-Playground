#include <stdio.h>
#include <conio.h>
void main(){
    char string[10];
    printf("enter your name:\n");
    scanf("%[^e]",string);
    printf("Your name is %s",string);
    getch();
}
