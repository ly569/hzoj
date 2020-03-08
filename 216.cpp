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
        str[i] = str[i].substr(3);
    }
    sort(str, str + n);
    for (int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }
    return 0;
}