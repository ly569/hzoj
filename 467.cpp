#include <iostream>
#include <inttypes.h>
using namespace std;

int64_t func(int x) {
    if (x == 1) return 1;
    return func(x - 1) * x;
}

int main() {
    int x;
    cin >> x;
    cout << func(x) << endl;
    return 0;
}