//03_PRANAY GUPTA
#include <stdio.h>
#include <math.h>

double fact(int f);
double power(double x, int y);

int main()
{
    int n;
    float x, psum = 0.0, nsum = 0.0;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%f", &x);
    for (int i = 1; i <= 1000; i += 4)
    {
        psum = psum + (pow(x, i) / fact(i));
    }
    for (int i = 3; i <= 1000; i += 4)
    {
        nsum = nsum + (pow(x, i) / fact(i));
    }
    printf("Sin of = %f", psum - nsum);
    return 0;
}
double fact(int x)
{
    double f = 1;
    if (x == 0)
    {
        return f;
    }
    else
    {
        for (int i = 1; i <= x; i++)
        {
            f = f * i;
        }
    }
    return f;
}