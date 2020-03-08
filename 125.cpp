#include <iostream>
#include <cstdio>
using namespace std;

#define MAX_N 86400.0

int main() {
    int h, m, s, t;
    cin >> h >> m >> s >> t;
    int time = h * 3600 + m * 60 + s + t;
    if (time >= MAX_N) time -= MAX_N;
    if (time < MAX_N / 2) {
        if (time < 3600) {
            time += MAX_N / 2;
        }
        cout << time / 3600 << ":" << time % 3600 / 60 << ":" << time % 60 << "am" << endl;
    } else {
        time -= MAX_N / 2;
        if (time < 3600) {
            time += MAX_N / 2;
        }
        cout << time / 3600 << ":" << time % 3600 / 60 << ":" << time % 60 << "pm" << endl;
    }
    printf("%.2f%%\n", t / MAX_N * 100);
    return 0;
}