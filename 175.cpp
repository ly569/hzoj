#include <iostream>
using namespace std;

int main() {
    int n, y = 0, l = 0, z = 0, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t >= 90) {
            y++;
        } else if (t >= 80) {
            l++;
        } else if (t >= 60) {
            z++;
        } else {
            c++;
        }
    }
    cout << "You " << y << endl;
    cout << "Liang " << l << endl;
    cout << "Zhong " << z << endl;
    cout << "Cha " << c << endl;
    return 0;
}