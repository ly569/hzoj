#include <iostream>
using namespace std;
#define MAX_N 30

int num[MAX_N + 5][MAX_N + 5];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> num[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        cout << num[i][i] << endl;
    }
    return 0;
}
