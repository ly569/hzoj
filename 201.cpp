#include <iostream>
using namespace std;
#define MAX_N 1000

int num[MAX_N + 5] = {0};

int main () {
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (!num[temp]) {
            num[temp] = 1;
            ans += 1;
        }
    }
    cout << ans << endl;
    int flag = 0;
    for (int i = 0; i <= MAX_N; i++) {
        if (num[i]) {
            if (flag) {
                cout << ' ';
            }
            cout << i;
            flag = 1;
        }
    }
    return 0;
}