#include <iostream>
using namespace std;

int main() {
    int y, m, d;
    cin >> y >> m >> d;
    if (m <= 2) {
        m += 12;
        y -= 1;
    }
    int h = (d + 26 * (m + 1) / 10 + y % 100 + y % 100 / 4 + y / 100 / 4 + 5 * (y / 100)) % 7;
    switch (h) {
    case 0 :
    cout << 6 << endl;
    break; 
    case 1 :
    cout << 7 << endl;
    break;
    case 2 :
    cout << 1 << endl;
    break;
    case 3 :
    cout << 2 << endl;
    break;
    case 4 :
    cout << 3 << endl;
    break;
    case 5 :
    cout << 4 << endl;
    break;
    case 6 :
    cout << 5 << endl;
    break;
    }
    return 0;
}