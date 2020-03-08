#include <iostream>
using namespace std;

#define MAX_N 100000

int main() {
    long long n, num[MAX_N + 5] = {0, 1, 1};
    cin >> n;
    for (int i = 3; i <= n; i++) {
        num[i] = num[i - 1] + num[i - 2];
        num[i] %= 1000000007;
    }
    cout << num[n] << endl;
    return 0;
}