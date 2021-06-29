//03_PRANAY GUPTA
#include <stdio.h>
int main()
{
    int m, p, c;
    printf("Enter the Marks of Maths: ");
    scanf("%d", &m);
    printf("Enter the Marks of Physics: ");
    scanf("%d", &p);
    printf("Enter the Marks of Chemistry: ");
    scanf("%d", &c);
    if (m >= 65 && p >= 55 && c >= 50 && (m + p + c >= 190 || m + p >= 140))
        printf("Eligible.");
    else
        printf("Not Eligible.");
    return 0;
}