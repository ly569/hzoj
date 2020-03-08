#include <iostream>
#include <cstdio>
using namespace std;

int n, k, num[1000005];

int main() {
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < k; i++) {
        int temp;
        scanf("%d", &temp);
        if (i) {
            cout << " ";
        }
        int l = 1, r = n;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (num[mid] == temp) {
                cout << mid;
                break;
            }
            if (num[mid] > temp) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        if (l > r) {
            cout << 0;
        }
    }
    return 0;
}