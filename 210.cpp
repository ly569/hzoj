#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define MAX_N 30

string str[MAX_N + 5];

int main () {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    sort(str, str + n);
    for (int i = 0; i < n; i++) {
        if (i) {
        cout << ' ';
        }
        cout << str[i];
    }
    return 0;
}