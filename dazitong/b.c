#include <stdio.h>


int n;
int a[100];
int b[100][100];
int main () {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for (int i = 1; i < n; i++) {
        for (int j = i; j >= 1; j--) {
            b[i][j] = a[i+1] - a[j];
//            printf("a[i+1] = %d, a[j] = %d, b[i][j] = %d\n", a[i+1], a[j], a[i+1] - a[j], b[i][j]);
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = i; j >= 1; j--) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}