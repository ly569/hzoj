#include <iostream>
using namespace std;

int f(int n, int num[]) {
    int m = num[0];
    for (int i = 1; i <n; i++) {
        if (m < num[i]) {
            m = num[i];
        }
    }
    return m;
}

int main() {
    int n, num[100000] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cout << f(n, num) << endl;
    return 0;
}