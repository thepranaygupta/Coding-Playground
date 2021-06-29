#include <stdio.h>
int main() {
    int count=1;
    for (int i = 1; i <= 5; i++) {
        int m = count;
        for (int j=1; j<=i; j++) {
            printf("%d ",m);
            m = m-(5+j-i);
        }
        printf("\n");
        count = count+1+5-i;
    }
    return 0;
}
