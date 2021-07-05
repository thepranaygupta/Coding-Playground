//03_PRANAY GUPTA
#include <stdio.h>

// -------------------CALL BY ADDRESS--------------------
// void areaperi(double *r, double *area, double *peri)
// {
//     *area = 3.14 * *r * *r;
//     *peri = 2 * 3.14 * *r;
// }
// int main()
// {
//     double r, area, peri;
//     printf("Enter the Radius: ");
//     scanf("%lf", &r);
//     areaperi(&r, &area, &peri);
//     printf("\nRadius = %lf", r);
//     printf("\nArea = %lf", area);
//     printf("\nPerimeter = %lf", peri);
//     return 0;
// }

// -------------------CALL BY VALUE-----------------------
double area(double r)
{
    return (3.14 * r *r);
}
double perimeter(double r)
{
    return(2 * 3.14 * r);
}
int main()
{
    double r;
    printf("Enter the Radius: ");
    scanf("%lf", &r);
    printf("\nRadius = %lf", r);
    printf("\nArea = %lf", area(r));
    printf("\nPerimeter = %lf", perimeter(r));
}