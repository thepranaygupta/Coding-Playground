#include <iostream>
using namespace std;

int main()
{
    int c, z, x[100000], k, a[100000], b, m, t;
    cin >> t;
    while (t--)
    {
        int n, y;
        cin >> n;
        for (int i = 0; i < n; cin >> a[i], i++);
        y = 0;
        for (int j = 0; j < n; j++)
        {
            b = a[j];
            c = 0;
            for (m = 0; m < n; m++)
                if (a[m] == b)
                    c++;
            if (c % 2 != 0)
            {
                for (z = 0; z <= y; z++)
                    if (x[z] == b)
                        break;
                    else
                        printf("%d\n", b);
                x[y] = b;
            }
        }
    }
    return 0;
}