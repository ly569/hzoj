#include <iostream>
using namespace std;

int main () {
    int m, n, sum = 0;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        if (i % 2 == 0 && i % 5 == 0) continue;
        else sum += 1;
    }
    cout << sum << endl;
    return 0;
}