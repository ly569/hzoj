#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 100

double num[MAX_N + 5] = {0};

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n);
    for (int i = 0; i < n; i++) {
        cout << num[i] << endl;
    }
    return 0;
}