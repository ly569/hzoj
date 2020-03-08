#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int num1[15][15] = {0};
int num2[105] = {0};

int main() {
    int n, m, cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> num1[i][j];
            num2[cnt] = num1[i][j];
            cnt += 1;
        }
    }
    for (int i = 0; i < m; i++) {
        int max = num1[0][i];
        for (int j = 1; j < n; j++) {
            if (max < num1[j][i]) {
                max = num1[j][i];
            }
        }
        cout << max << endl;
    }
    sort(num2, num2 + cnt);
    int sum = 0;
    for (int i = cnt - 1; i >= 0; i--) {
        sum += num2[i];
        cout << num2[i];
        if (i) {
            cout << " ";
        }
    }
    cout << endl;
    int avg = round(1.0 * sum / cnt);
    cout << avg << endl;
    int ans = 0;
    for (int i = cnt - 1; i >= 0; i--) {
        if (num2[i] >= avg) {
            ans += 1;
        } else {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}