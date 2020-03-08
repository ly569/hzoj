#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct Stu {
    char name[50];
} arr[10];

int cmp (struct Stu a, struct Stu b) {
    int t = strcmp(a.name, b.name);
    return t < 0;
}

int main() {
    for (int i = 0; i < 10; i++) cin >> arr[i].name; 
    sort(arr, arr + 10, cmp);
    for (int i = 0;i < 10; i++) {
        cout << arr[i].name << endl;
    }
    return 0;
}