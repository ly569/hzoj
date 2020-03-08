#include <iostream>
#include <cstring>
using namespace std;
#define MAX_N 26

int main () {
    char str[MAX_N + 5];
    cin >> str;
    int a = 0;
    int l = strlen(str);
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            cout << str[a];
            a += 1;
            a %= l;
        }
        cout << endl;
        a += l - 2;
        a %= l;
    }
    return 0;
}