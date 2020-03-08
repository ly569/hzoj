#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a < 0) {
        a = 0;
    }
    for(int i = ((a - 1) / 2 + (a != 0)) * 2,j = 0;j < b;j++,i += 2) {
        cout << i << endl;
    }
    return 0;
}