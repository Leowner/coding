#include <stdio.h>
#include <string.h>

#define maxn 2000
int T, n;
int a[maxn];
int fro, bac;

int main () {
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
        fro = n - 1;
        bac = 0;
        if ((a[n] <= a[1] && a[1] <= a[n-1]) || (a[n] >= a[1] && a[1] >= a[n-1])) fro = 0;
        else {
            for (int i = 2; i < n; i++) {
                if ((a[n] <= a[i] && a[n] >= a[i-1] && a[1] <= a[n-1]) || a[n] >= a[i] && a[n] <= a[i-1] && a[1] >= a[n-1]) {
                    fro = i - 1;
                    break;
                }
            }
        }
        if ((a[n] >= a[n-1] && a[n-1] >= a[1]) || (a[n] <= a[n-1] && a[n-1] <= a[1])) bac = n - 1;
        else {
            for (int i = n-2; i >= 1; i--) {
                if ((a[n] <= a[i] && a[n] >= a[i+1] && a[n-1] <= a[1]) || (a[n] >= a[i] && a[n] <= a[i+1] && a[n-1] >= a[1])) {
                    bac = i;
                    break;
                }
            }
        }
        printf("%d %d\n",fro, bac);
    }    

    return 0;
}