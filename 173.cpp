#include <iostream>
#include <cstdio>
using namespace std;

#define MAX_N 10000

char s[MAX_N + 5] = {0};

int main() {
    gets(s);
    int let = 0, num = 0, spa = 0, oth = 0;
    for (int i = 0; s[i] != 0; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            let += 1;    
        } else if (s[i] >= '0' && s[i] <= '9') {
            num += 1;
        } else if (s[i] == ' ') {
            spa += 1;
        } else {
            oth += 1;
        }
    }
    cout << let << " " << num << " " << spa << " " << oth << endl;
    return 0;
}