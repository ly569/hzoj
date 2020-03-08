#include <iostream>
#include <inttypes.h>
using namespace std;

int64_t pow(int n) {
    int64_t s = 1;
    for(int i = 1; i <= n; i++) {
        s *= 2;
    }
    return s; 
}

int main() {
    int x;
    cin >> x;
    cout << pow(x) << endl;
    return 0;
}