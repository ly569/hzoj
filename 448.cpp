/*************************************************************************
	> File Name: 448.cpp
	> Author: ly
	> Created Time: 2020年01月04日 星期六 20时01分53秒
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
#define MAX_N 100

int arr[MAX_N + 5]= {0};

int main () {
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> num;
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            flag = i + 1;
            break;
        }
    }
    cout << (flag ? flag : 0) << endl;
    return 0;
}
