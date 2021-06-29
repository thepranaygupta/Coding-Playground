//#include<iostream>
#include<stdio.h>
int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    //cout << "Enter a Number: ";
    //cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            printf("%d", i);
            //cout << i;
        }
        printf("\n");
        //cout << endl;
    }
    return 0;
}
