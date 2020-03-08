#include <iostream>
using namespace std;
#define MAX_N 100000

int num[MAX_N + 5] = {0};


int main () {
    int n, k, s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cin >> k >> s;
    int f = s - k;
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (num[mid] == f) {
            cout << "Yes" << endl;
            return 0;
        }
        if (num[mid] < f) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << "No" << endl;
    return 0;
}