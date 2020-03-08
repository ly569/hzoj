#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    scanf("%s",&a);
    int b = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == 'A')
        {
            b++;
        }
    }
    printf("%d", b);
    return 0;
}