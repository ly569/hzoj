#include <iostream>
using namespace std;

int number_1(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int number_2(int n) {
    if (n / 10000 == n % 10 && n / 1000 % 10 == n / 10 % 10) {
        return 1;
    } else {
        return 0;
    }
} 
int main() {
    int a, b;
    cin >> a >> b;
    int flag = 0;
    for (int i = a; i <= b; i++) {
        if (number_1(i) && number_2(i)) {
            if (flag == 1) {
                cout << " ";
            }
            cout << i;
            flag = 1;
        }
    }
    return 0;
}