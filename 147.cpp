#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    if(str[str.size()-1] % 2){
        cout << "NO" << endl;
    } else {
        cout << "YES" <<endl;
    }
    
    return 0;
}