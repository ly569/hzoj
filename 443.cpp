#include <iostream>
using namespace std;

#define MAX_N 10000

int arr[MAX_N + 5];

int main () {
    int l, m, a, b;
    cin >> l >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        for (int j = a; j <= b; j++) {
            arr[j] = 1;
        }
    }
    int ans = 0;
    for (int i = 0; i <= l; i++) {
        if (!arr[i]) ans += 1;
    }
    cout << ans << endl;
    return 0;
}
