#include <iostream>
using namespace std;
#define MAX_N 1000000

int prime[MAX_N + 5] = {0};

void init(int n) {
    for (int i = 2; i <= n; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int cnt[MAX_N + 5] = {0};

int main () {
    int n;
    cin >> n;
    init(n);
    for (int j = 1; j <= prime[0]; j++) {
        long long temp = prime[j], cnt = 0;
        while (temp <= n){
            cnt += n / temp;
            temp *= prime[j];
        }
        cout << prime[j] << " " << cnt << endl;
    }
    return 0;
}