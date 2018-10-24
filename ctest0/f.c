#include <stdio.h>

int n, m;
int tot;

int is_mod(void) {
    int tem = 0;
    for (int i = tot; i > 0; i--) {
        tem *= 10;
        tem += n;
        if (tem >= m) {
            tem = tem % m;
        }
    }
    if (tem == 0) return 1;
    return 0;
}
int main () {
    while (scanf("%d %d", &n, &m) == 2) {
        tot = 0;
        for (int i = 1; i <= 150; i++) {
            tot++;
            if (is_mod()) {
                printf("%d\n", tot);
                break;
            }
        }
        if (tot == 150) {
            printf("0\n");
        }
    }

    return 0;
}