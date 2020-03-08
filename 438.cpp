#include <iostream>
using namespace std;

int f(int x) {
    if (x <= 240) {
         return (240-x) * 0.4783;
    } else if (x > 241 && x <= 400) {
        return (x - 240) * 0.5283 + x * 0.4783;
    } else {
        return 240*0.4783+400*0.5283+(x-240-400)*0.7783;
    }
}

int main () {
    int x;
    cin >> x;
    cout << f(x) << endl;
    return 0;
}