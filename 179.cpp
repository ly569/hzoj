#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int p, q;
double f(double x) {
    return p * x + q;
}

int main() {
    cin >> p >> q;
    double l = -20, r = 20;
    while (fabs(l - r) > 0.000001) {
        double m = (l + r) / 2;
        if (f(l) * f(m) > 0) {
            l = m;
        } else {
            r = m;
        }
    }
    printf("%.4f\n", l);
    return 0;
}