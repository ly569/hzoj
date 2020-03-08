#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
#define MAX_N 30

int num[MAX_N + 5] = {0};

bool cmp(int a, int b) {
    return a > b;
}

int main () {
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cin >> m;
    sort(num, num + n, cmp);
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += num[i];
    }
    printf("%.2f\n", 1.0 * sum / m);
    return 0;
}