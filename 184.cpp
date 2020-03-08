#include <iostream>
using namespace std;

int f(int x, int n) {
    if(n == 1) {
        return x;
    } else {
        return f((x + 1) * 2 ,n - 1);
    }
}

int main () {
    int n;
    cin >> n;
    cout << f(1, n) << endl;
    return 0;
}