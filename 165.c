#include<stdio.h>
#include<math.h>
int main() {
    long long c;
    scanf("%lld", &c);
    int n = 0;
    for (long long a = 0; a < c; a++) {
        long long b = sqrt(c * c - a * a);
        if (a * a + b * b == c * c) {
            n++;
        }
    }
    printf("%d",n/2);
    return 0;
}