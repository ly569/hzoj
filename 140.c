#include <stdio.h>
int main() {
	int n;
    scanf("%d", &n);
    char a = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n-i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i-1; j++) {
        	printf("%c", a+i-1);
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * (n - i)-1; j++) {
            printf("%c", a+n-i-1);
        }
        printf("\n");
    }	
    return 0;
}