#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct stu {
    int a, b, c, d;
    int sum;
    string name;
};

bool cmp1(stu a, stu b) {
    if (a.a == b.a) {
        return a.name < b.name;
    }
    return a.a > b.a;
}
bool cmp2(stu a, stu b) {
    if (a.b == b.b) {
        return a.name < b.name;
    }
    return a.b > b.b;
}
bool cmp3(stu a, stu b) {
    if (a.c == b.c) {
        return a.name < b.name;
    }
    return a.c > b.c;
}
bool cmp4(stu a, stu b) {
    if (a.d == b.d) {
        return a.name < b.name;
    }
    return a.d > b.d;
}
bool cmp5(stu a, stu b) {
    if (a.sum == b.sum) {
        return a.name < b.name;
    }
    return a.sum > b.sum;
}

int main() {
    int n;
    stu s[105];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i].name >> s[i].a >> s[i].b >> s[i].c >> s[i].d;
        s[i].sum = s[i].a + s[i].b + s[i].c + s[i].d;
    }
    sort(s, s + n, cmp1);
    for (int i = 0; i < 4; i++) {
        if (i) {
            cout << " ";
        }
        cout << s[i].name;
    }
    cout << endl;
    sort(s, s + n, cmp2);
    for (int i = 0; i < 4; i++) {
        if (i) {
            cout << " ";
        }
        cout << s[i].name;
    }
    cout << endl;
    sort(s, s + n, cmp3);
    for (int i = 0; i < 4; i++) {
        if (i) {
            cout << " ";
        }
        cout << s[i].name;
    }
    cout << endl;
    sort(s, s + n, cmp4);
    for (int i = 0; i < 4; i++) {
        if (i) {
            cout << " ";
        }
        cout << s[i].name;
    }
    cout << endl;
    sort(s, s + n, cmp5);
    for (int i = 0; i < 4; i++) {
        if (i) {
            cout << " ";
        }
        cout << s[i].name;
    }
    cout << endl;
    return 0;
}