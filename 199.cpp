#include <iostream>
using namespace std;

#define MAX_N 100000
#define MAX_M 10

int num[MAX_N + 5] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int a[MAX_M + 5];

int func(int n) {
    return a[1] * num[n - 1] + a[2] * num[n - 2] +
           a[3] * num[n - 3] + a[4] * num[n - 4] +
           a[5] * num[n - 5] + a[6] * num[n - 6] +
           a[7] * num[n - 7] + a[8] * num[n - 8] +
           a[9] * num[n - 9] + a[10] * num[n - 10]; 
}

int main () {
    int k, m;
    cin >> k >> m;
    for (int i = 1; i <= MAX_M; i++) {
        cin >> a[i];
    }
    for (int j = 10; j <= k; j++) {
        num[j] = func(j) % m;
    }
    cout << num[k] << endl;
    return 0;
}