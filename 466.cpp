#include <iostream>
using namespace std;

int func(int n) {
    int a,y = 0;
    a = n;
    while(a) {
        y = y *10 + a % 10;
        a = a / 10;  
    }
    if (y == n) return 1;
    else return 0;
}

int main () {
    int n, sum= 0;
    cin >> n;
    for (int i = 1; i <= n;i++) {
        if(func(i)) sum+=1;
    }
    cout << sum;
    return 0;
}