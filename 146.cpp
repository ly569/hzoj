#include <iostream>
#include <string>
using namespace std;

int main() {
    string na;
    cin >> na;
    for (int i = 0; i < na.size(); i++) {
        if ((na[i] >= 'a' && na[i] < 'z') || (na[i] >= 'A' && na[i] < 'Z')) {
            na[i]++;   
        } else if (na[i] == 'z') {
            na[i] = 'a';
        } else if (na[i] == 'Z') {
            na[i] = 'A';
        }
    }
    cout << na << endl;
    return 0;
}