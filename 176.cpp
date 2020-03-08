#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    char s1[1005], s2[1005];
    gets(s1);
    gets(s2);
    int ans = 0;
    int l1 = strlen(s1), l2 = strlen(s2);
    for (int i = 0; i <= l1 - l2; i++) {
        if (strncmp(s2, &s1[i], l2) == 0) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}