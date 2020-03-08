#include <iostream>
using namespace std;

int main() {
    int begin, n;
    cin >> begin >> n;
    if(begin < 0) {
        begin=0;
    }
    if (begin % 2 == 1) {
        for (int i = begin + 1; i < begin+(2*n); i+=2) {
            cout << i << endl;
        }
    } else if (begin % 2 == 0) {
        for (int i = begin; i < begin+(2 * n); i+=2) {
            cout << i << endl;
        }
    }
    return 0;
}