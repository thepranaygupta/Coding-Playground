#include <iostream>
using namespace std;

int main()
{
    int n1, n2, hcf=1;
    cout << " Enter the two numbers: ";
    cin >> n1 >> n2;
    for (int i=1; i<(n1+n2); i++)
    {
        if ((n1%i==0) && (n2%i==0))
            gcd=i;
    }
    lcm=(n1*n2)/gcd;
    cout << "The GCD of the two numbers is: " << gcd << endl;
    return 0;
}
