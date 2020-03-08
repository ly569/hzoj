#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 1000

int num1[MAX_N + 5] = {0};
int num2[MAX_N + 5] = {0};
int main () {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num1[i];
        num2[i] = i;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            if (num1[j] > num1[j + 1]) {
                swap(num1[j], num1[j + 1]);
                swap(num2[j], num2[j + 1]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            cout << ' ';
        }
        cout << num2[i];
    } 
    return 0;
}