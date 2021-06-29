#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Enter the Limit:";
    cin >> c;
    for(int i=97; i<=(int)c; i++) {
        cout << (char)i << " ";
    }
    return 0;
}
