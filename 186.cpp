#include <iostream>
using namespace std;

int n, num[100005];

int func(int x, int p) {
    if (p >= n) {
        return x-1;
    }
    return func(x + 1, p + num[p]);
}

int main () {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cout << func(1, 0) << endl;
    return 0;
}