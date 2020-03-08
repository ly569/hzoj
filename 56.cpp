#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x, y, num[10];
    cin >> x >> y;
    for (int i = 0; i < y; i++) num[i] = i;
    int k = 10 - 1;
    do {
        next_permutation(num, num + 10);
        k--;
    } while(k);
    for (int i = 0; i < x; i++) {
        cout << num[i];
    }
    cout << endl;
    return 0;
}