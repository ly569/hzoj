#include <iostream>
using namespace std;

int main() {
    int n, m;
    double num[35][35];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> num[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        double sum = 0;
        for (int j = 0; j < n; j++) {
            sum += num[j][i];
        }
        cout << sum << endl;
    }
    return 0;
}