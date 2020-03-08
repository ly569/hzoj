#include <iostream>
using namespace std;
#define MAX_N 8000000 

int prime[MAX_N + 5];
int is_prime[MAX_N + 5] = {1, 1, 0};

void is_val() {
    for (int i = 2; i < MAX_N; i++) {
        if(!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX_N) break;
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

void solve(int n) {
    int ans = 0;
    for (int i = 2; i * 2 <= n; i++) {
        if(!is_prime[i] && !is_prime[n - i]) ans += 1;
    }
    cout << ans << endl;
}

int main() {
    is_val();
    int n;
    cin >> n;
    solve(n);
    return 0;
}
