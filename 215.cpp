#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct stu {
    int sum;
    string name;
};

bool cmp(stu a, stu b) {
    return a.sum > b.sum;
}

int main () {
    stu num[45];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i].name;
        num[i].sum = 0;
        for (int j = 0; j < 4; j++) {
            int temp;
            cin >> temp;
            num[i].sum += temp;
        }
    }
    sort(num, num + n, cmp);
    for (int i = 0; i < 3; i++) {
        cout << num[i].name << endl;
    }
    return 0;
}