#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    cout << "Enter two Numbers: ";
    scanf("%d %d", &a, &b);
    swap(pa, pb);
    printf("Swapped Numbers are: %d %d", a, b);
    return 0;
}