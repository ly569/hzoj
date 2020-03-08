#include <iostream>
using namespace std;

int main () {
    int begin, end;
    cin >> begin >> end;
    if (begin < end) {
        if(begin < 0 && end >= 0) {
            for (int i = 0; i <= end; i++) {
            cout << i << endl;
        }
        } else if (begin >= 0 && end > 0 ) {
            for (int i = begin; i <= end; i++) {
            cout << i << endl;
        }
        } else {
            cout << "ERROR" << endl;
        }
    } else {
        cout << "ERROR" << endl;
    }
    return 0;
}