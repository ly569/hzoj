#include <iostream>
using namespace std;

int num1(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int num2(int n) {
    switch (n) {
        case 1 :
        case 4 :
        case 9 :
        case 16 :
        case 25 :
        case 36 :
        case 49 :
        case 64 :
        case 81 : return 1;
    }
    return 0;
}

int main() {
    int a, b;
    cin >> a >> b;
    int flag = 0, cnt = 0;
    for (int i = a; i <= b; i++) {
        if (i % 6 == 0 && num1(i / 100) && num2(i % 100)) {
            if (flag == 1) {
                cout << " ";
            }
            cout << i;
            flag = 1;
            cnt++;
        }
    }
    cout << endl << cnt << endl;
    return 0;
}