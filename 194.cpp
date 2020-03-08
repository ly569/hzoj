#include <iostream>
using namespace std;
#define MAX_N 100000

int num[MAX_N + 5] = {0};

int main() {
    int n, s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cin >> s;
    for (int i = 0; i < n; i++) {
        int f = s - num[i];
        int l = i + 1, r = n - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (num[mid] == f) {
                cout << "Yes" << endl;
                return 0;
            }
            if (num[mid] > f) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}