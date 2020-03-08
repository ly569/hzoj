#include <iostream>
using namespace std;

int main () {
    char str;
    cin >> str;
    int n = (int)(str - 'A') + 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = (n - i - 1); j >= 0; j--) {
            cout << (char)('A' + j);
        }
        for (int j = 0; j < (n - i - 1); j++) {
            cout << (char)('A' + j);
        }
        cout << endl;
    }
    return 0;
}