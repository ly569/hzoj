#include <iostream>
#include <cstdio>
using namespace std;
#define MAX_N 30

int num[MAX_N + 5] = {4, 7};

int main () {
    int n;
    cin >> n;
    double ans = 4.0 / 7;
    for (int i = 2; i <= n; i++) {
        num[i] = num[i - 1] + num[i - 2];
        ans += 1.0 * num[i - 1] / num[i];
    }
    cout << num[n - 1] << "/" << num[n] << endl;
    printf("%.2f\n", ans);
    return 0;
}
