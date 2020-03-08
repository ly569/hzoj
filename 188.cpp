#include <iostream>
using namespace std;

int num[1000005];
void init() {
    for (int i = 2 ; i * i <= 1000005; i++) {
        if (num[i] == 0) {
            for (int j = 2; i * j <= 1000005; j++) {
                num[i * j] = 1;
            }
        }
    }
}

int main() {
    init();
    int n, m;
    cin >> n >> m;
    for (int i = m; i <= n; i++) {
        if (num[i] == 0) {
            cout << i << endl;
        }
    }
    return 0;
}