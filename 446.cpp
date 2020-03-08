#include<iostream>
using namespace std;

int arr[10][10];

int main () {
    int n;
    cin >> n;
    for (int i = 1; i <= (n + 1) / 2; i++)
        for (int a = i; a <= n + 1 - i; a++)
            for (int b = i; b <= n + 1 - i; b++)
                arr[a][b] = i;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j != n + 1 && j != 1) {
                cout << " ";
            }
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}
