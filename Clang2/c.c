#include <stdio.h>
#include <string.h>
#include <math.h>
int a, b;
int x;
int ans;
int t;

int is_prime(int p) {
    if (p == 1) return 0;
    int x2 = sqrt(p) + 1;
    for (int i = 2; i <= x2; i++) {
        if (p % i == 0) return 0;
    }
    return 1;
}

int mir(int ori, int base, int po) {
    ans = 0;
    t = ori / 10;
    for (int i = 1; i <= base; i++) {
        ans *= 10;
        ans += (t % 10);
        t /= 10;
    }
    return (ans + ori * po);
}

void check(int base) {
    int tcheck = 1;
    for (int i = 1; i <= 2 * base - 2; i++) tcheck *= 10;
    if (tcheck > b) return;
    tcheck = 9;
    for (int i = 1; i <= 2 * base - 2; i++) {
        tcheck *= 10;
        tcheck += 9;
    }
    if (tcheck < a) return;
    int imin = 1;
    for (int i = 1; i < base; i++) imin *= 10;
    // if (imin > b) return;
    int imax = 9;
    for (int i = 1; i < base; i++) {
        imax *= 10;
        imax += 9;
    } 
    for (int i = imin; i <= imax; i++) {
        x = mir(i, base - 1, imin);
        if (x == 9) x = 11;
        if (x < a || x > b) continue;
        if(is_prime(x)) printf("%d\n", x);
    }
    // if (imax < a) return;
    // printf("%d %d %d\n", base, imin, imax);
}  
int main () {
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= 5; i++) {
        // if (i % 2 == 0) continue;
        check(i);
    }
    // printf("%d", mir(15550, 4, 10000));

    return 0;
}