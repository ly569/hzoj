#include <iostream>
using namespace std;

int main() {
    int n, m, num[201][201];
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
        cin >> num[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = n - 1; j >= 0; j--) {
            if (j != n - 1) {
                cout << " ";
            }
            cout << num[j][i];
        }
        cout << endl;
    }
    return 0;
}