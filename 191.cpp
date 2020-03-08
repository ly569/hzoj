#include <stdio.h>

#define MAX_N 8000000

int prime[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

void value(int l, int r) {
    int a = -1, b = -1, c = -1, d = -1;
    int max_len = 0, min_len = MAX_N;
    for (int i = 2; i <= prime[0] && prime[i] <= r; i++) {
        if(prime[i - 1] < l) continue;
        int tmp = prime[i] - prime[i - 1];
        if (tmp < min_len) {
            a = prime[i - 1];
            b = prime[i];
            min_len = tmp;
        }
        if (tmp > max_len) {
            c = prime[i - 1];
            d = prime[i];
            max_len = tmp;
        }
        
    }
    if (a == -1) {
        printf("There are no adjacent primes.\n");
    } else {
        printf("%d,%d are closest, %d,%d are most distant.\n",a, b, c, d);
    }
}

int main() {
    init();
    int l, r;
    while (~scanf("%d%d", &l, &r)) value(l, r);
    return 0;
}