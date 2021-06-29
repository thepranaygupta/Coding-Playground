#include <stdio.h>
int main()
{
    float radius, area;
    printf("Enter radius of circle\n");
    scanf("%f", & radius);
    area = 3.1416 * radius * radius;
    printf("Area of circle : %0.4f", area);
    return 0;
}
