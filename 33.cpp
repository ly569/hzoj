#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
    double m, n;
    int p;
    cin >> m >> n >> p;
    if (p == 1) {
        printf("%.2f",(m + n) * 1.087 / 2);
    } else if (p == 0) {
        printf("%.2f",(m * 0.973 + n) / 2);
    }
    return 0;
}
