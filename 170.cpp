#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        while (str.find("Ban_smoking") != -1) {
            int ans = str.find("Ban_smoking");
            str.replace(ans, 11, "No_smoking");
        }
        cout << str << endl;
    }
    return 0;
}