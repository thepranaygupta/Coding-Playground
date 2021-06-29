#include <stdio.h>

int main() {
    int n, r, rev;
    printf("Enter the Number: ");
    scanf("%d", &n);
    int i = n;
    while(i>0) {
        r = i%10;
        rev = (rev*10)+r;
        i/=10;
    }
    printf("Reverse of the %d: %d", n, rev);
    return 0;
}
