#include <iostream>
using namespace std;

#define MAX_N 50

int num[MAX_N + 5] = {0, 0, 1, 1};

int main() {
    int n;
    cin >> n;
    for (int i = 4; i <= n; i++) {
        num[i] = num[i - 2] + num[i - 3];
    }
    cout << num[n] << endl;
    return 0;
}