#include <iostream>
#include <cstdio>
using namespace std;

#define MAX_N 1000000

char str1[MAX_N + 5] = {0};
char str2[3 * MAX_N + 5] = {0};

int main () {
    gets(str1);
    for (int i = 0, j = 0; str1[i]; i++) {
        if (str1[i] != ' ') {
            str2[j] = str1[i];
            j += 1;
        } else {
            str2[j] = '%';
            str2[j + 1] = '2';
            str2[j + 2] = '0';
            j += 3;
        }
    }
    cout << str2 << endl;
    return 0;
}