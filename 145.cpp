#include <iostream>
#include <string>
using namespace std;

int main() {
    string na;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        if (temp.size() > na.size())
        {
            na = temp;
        }
    }
    cout << na << endl;
    return 0;
}