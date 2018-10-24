#include <stdio.h>
#include <math.h>
int T;
int n;

int is_prime(int x) {
    int c = sqrt(x) + 1;
    for (int i = 2; i <= c; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main () {

    scanf("%d", &T);
    while(T--) {
        scanf("%d", &n);
        for (int i = n; ; i++) {
            if (is_prime(i)) {
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}