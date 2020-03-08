#include <iostream>
using namespace std;

void ex_gcd(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1, y = 0;
    } else {
        ex_gcd(b , a % b, y, x), y -= (a / b) * x;
    }
}

int main () {
    int a, b, x, y;
    cin >> a >> b;
    ex_gcd(a, b, x, y);
    if (x >= y) {
        cout << y;
    } else {
        cout << x;
    }
    
    return 0;
}