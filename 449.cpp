#include <iostream>
using namespace std;
#define MAX_N 30

int num[MAX_N + 5] = {0, 1, 1};

int main () {
    int n;
    cin >> n;
    if (n == 1) {
        cout << "1" << endl;
        return 0;
    }
    cout << "1" << endl;
    cout << num[1] << ' ' << num[2] << endl;
    for (int i = 3; i <= n; i++){
        num[1] = num[i] = 1;
        for (int j = i - 1; j > 1; j--)
            num[j] = num[j] + num[j - 1];
        for (int j = 1; j <= i; j++) {
            cout << num[j];
            if (j != i) cout << ' ';
        }
        cout << endl;
    }
    return 0;
}