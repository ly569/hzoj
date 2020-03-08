#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if (a / 1000 > 0) {
        if (a / 1000 == a % 10 && a / 100 % 10 == a / 10 % 10) {
            printf("YES");
        } else {
            printf("NO");
        }
    } else if (a / 100 > 0) {
        if (a / 100 == a % 10) {
            printf("YES");
        } else {
            printf("NO");
        }
    } else if (a / 10 > 0) {
        if (a / 10 == a % 10) {
            printf("YES");
        } else {
            printf("NO");
        }
    } else {
        printf("YES");
    }
	return 0;
}