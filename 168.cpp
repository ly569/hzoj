#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

#define MAX_N 100

string str[MAX_N + 5];

int main () {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for (int i = 0; i < n; i++) {
        if (str[i][0] >= 'a' && str[i][0] <= 'z') {
            str[i][0] -= 'a' - 'A';
        }
        for (int j = 1; j < str[i].size(); j++) {
            if (str[i][j] >= 'A' && str[i][j] <= 'Z') {
                str[i][j] += 'a' - 'A';
            }
        }
    }
    sort(str, str + n);
    for (int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }
    return 0;
}