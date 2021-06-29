//03_PRANAY GUPTA
#include <stdio.h>
#include <math.h>

double Series(double x, int n)
{
	double sum = 1, term = 1, fct, j, y = 2, m;
	int i;
	for (i = 1; i < n; i++)
	{
		fct = 1;
		for (j = 1; j <= y; j++)
		{
			fct = fct * j;
		}
		term = term * (-1);
		m = term * pow(x, y) / fct;
		sum = sum + m;
		y += 2;
	}
	return sum;
}

int main()
{
	double x;
	int n;
	printf("Input the Value of x: ");
	scanf("%lf", &x);
	printf("Input the number of terms: ");
	scanf("%d", &n);

	printf("\nNumber of terms = %d", n);
	printf("\nValue of x = %lf", x);
	printf("\nThe Sum = %f", Series(x, n));
	return 0;
}
