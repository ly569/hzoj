#include <iostream>
using namespace std;
#include <cstring>
#include <algorithm>

struct stu {
    int sum;
    string name;
    int num[4];
};

int main () {
    stu cnt[35];
    int n;
    cin >> n;
    int maxn = 0;
    int max = 0, min = 400;
    for (int i = 0; i < n; i++) {
        cin >> cnt[i].name;
        cnt[i].sum = 0;
        for (int j = 0; j < 4; j++) {
            int temp;
            cin >> temp;
            cnt[i].num[j] = temp;
            cnt[i].sum += temp;
            if (max < temp) {
                max = temp;
            }
            if (min > temp) {
                min = temp;
            }
        }
        cout << cnt[i].sum << endl;
        if (cnt[maxn].sum < cnt[i].sum) {
            maxn = i;
        }
    }
    cout << cnt[maxn].name << endl;
    cout << max << ' ' << min << endl;
    return 0;
}