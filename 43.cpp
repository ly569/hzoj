#include <iostream>
using namespace std;
#define MAX_N 1000

int val[MAX_N + 5][MAX_N + 5] = {0};
int keep[MAX_N + 5][MAX_N + 5] = {0};

int dfs(int i, int j, int n) {
    if (i + 1 == n) return val[i][j];
    if (keep[i][j]) return keep[i][j];
    int val1 = dfs(i + 1, j, n);
    int val2 = dfs(i + 1, j + 1, n);
    return keep[i][j] = (val1 > val2 ? val1 : val2) + val[i][j];
}

int main () {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> val[i][j];
        }
    }
    cout << dfs(0, 0, n) << endl;
    return 0;
}
/*#include <iostream>
using namespace std;
#define MAX_N 1000

int val[MAX_N][MAX_N] = {0};

int main () {
	int n;
	cin >> n;
    for (int i = 0;i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> val[i][j];
        }
    }
    for (int i = n - 2;i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            val[i][j] += max(val[i + 1][j], val[i + 1][j + 1]);
        }
    }
    cout << val[0][0] << endl;
    return 0;
} */