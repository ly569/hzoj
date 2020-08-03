#include <iostream>
using namespace std;
#include <set>
#include <string>

typedef pair<string, int> PSI;

int main() {
    set<PSI> s;
    string name;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name;
        name = name.substr(name.find(".") + 1, name.size());
        s.insert(PSI(name, i));
    }
    for (auto iter = s.begin(); iter != s.end(); iter++) {
        cout << iter->first << endl;
    }
    return 0;
}

