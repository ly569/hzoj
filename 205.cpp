/*************************************************************************
	> File Name: 205.cpp
	> Author: ly
	> Created Time: 2020年01月04日 星期六 21时25分01秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <math.h>
#include <cstring>
#include <string.h>
#include <cstdio>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
using namespace std;
typedef long long ll;
#define MAX_N 1000000

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m ; j++) {
            int temp;
            cin >> temp;
            sum += temp;         
        }
        printf("%.6f\n", 1.0 * sum / m);     
    }
        return 0;
}
