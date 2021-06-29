#include <stdio.h>
#include<math.h>
int main()
{
  float l,b;
  float area, peri, dia;
  printf("Enter length of rectangle: ");
  scanf("%f",&l);
  printf("Enter breadth of rectangle: ");
  scanf("%f",&b);
  area=l*b;
  printf("Area of rectangle: %f\n",area);
  peri=2*(l+b);
  printf("Perimeter of rectangle: %f\n",peri);
  dia=sqrt(l*l+b*b);
  printf("Diagonal of Rectangle: %f\n", dia);
  return 0;
}
