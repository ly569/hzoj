#include <iostream>
#include <cstring>
using namespace std;
#define max_n 10000000

int prime[max_n + 5] = {0};

int main () {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        cout << i << endl;
        for (int j = 1; j <=prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return 0;
}