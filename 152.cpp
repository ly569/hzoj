#include <iostream>
#include <string>
using namespace std;

int main () {
    int n;
    string str[7] ={"Monday", "Tuesday", "Wednesday", "Thursday","Friday","Saturday","Sunday"};
    cin >> n;
    switch (n) {
    case 1:
        cout << str[3];
        break;
    case 2:
        cout << str[4];
        break;
    case 3:
        cout << str[5];
        break;
    case 4:
        cout << str[6];
        break;
    case 5:
        cout << str[0];
        break;
    case 6:
        cout << str[1];
        break;
    case 7:
        cout << str[2];
        break;     
    default:
        break;
    }
    return 0;
}