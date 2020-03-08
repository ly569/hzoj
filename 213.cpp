#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 30

int a[MAX_N + 5] = {0};
int b[10] = {0};

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 100) {
            b[1]++;
        } else if (a[i] >= 90) {
            b[2]++;
        } else if (a[i] >= 80) {
            b[3]++;
        } else if (a[i] >= 70) {
            b[4]++;
        } else if (a[i] >= 60) {
            b[5]++;
        } else {
            b[6]++;
        }
    }
    sort(a, a + n);
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << endl;
    }
    for (int i = 1; i <= 6; i++) {
        if (i != 1) {
            cout << " ";
        }
        cout << b[i];
    }
    return 0;
}