#include <stdio.h>
#define maxn 2020

int n;
int a[maxn];
int is_s;

int main () {
    while (scanf("%d", &n) == 1) {
        for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
        int tot = 0;
        for (int i = 1; i < n; i++) {
            is_s = 1;
            for (int j = 1; j < n; j++) {
                if (a[j] > a[j+1]) {
                    is_s = 0;
                    tot++;
                    int t = a[j];
                    a[j] = a[j+1];
                    a[j+1] = t;
                }
            }
            if (is_s) break;
        }
        printf("%d\n", tot);
    }
    return 0;
}