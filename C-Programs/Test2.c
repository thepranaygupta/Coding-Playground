#include <stdio.h>
int main()
{
  int a[5] = {5, 1, 15, 20, 25};
  int i, j, m;
  i = ++a[1]; // i=2, a[1]=2
  j = a[1]++; // j=2, a[1]=3
  m = a[i++]; // m=a[2]=15, i=3

  printf("%d,%d,%d", i, j, m);
  // 3,2,15

  return 0;
}
