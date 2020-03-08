#include <iostream>
#include <string>
using namespace std;

string str(string a) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] -= 'a' - 'A';
        } else if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] += 'a' - 'A';
        }
    }
    return a;
}

int main() {
    string a;
    cin >> a;
    cout << str(a) <<endl;
    return 0;
}