
#include <iostream>
using namespace std;
int F (int n) {
    if (n<=5) return n;
    cout << "n = " << n << endl;
    int v = F(n-2);
    int w = F(n-3);
    int x = F(n-4);
    int y = F(n-5);
    int z = v+w+x+y;
    cout << "z = " << z << endl;
    return z;
}
int main( ) {
    F (11);
    return 0;
}
