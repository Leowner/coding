#include <stdio.h>
int n, m;
long long sum;
int tot;
int is_m;
int main () {
    while (scanf("%d %d", &n, &m) == 2) {
        tot = 0;
        sum = 0;
        is_m = 0;
        for (int i = 1; i <= m; i++) {
            sum = (sum * 10) % m;
            sum = (sum + n) % m;
            if (sum == 0) {
                printf("%d\n", i);
                is_m = 1;
                break;
            } 
        }
        if (!is_m) printf("0\n");
    }

    return 0;
}