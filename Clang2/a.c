#include <stdio.h>

int h, m;
double hang, mang;
int main () {
    while (scanf("%d %d", &h, &m) == 2) {
        if (h == 0 && m == 0) break;
        hang = h * 30.0 + m / 2.0;
        mang = m * 6.0;
        double ans = hang - mang;
        if (ans < 0) ans = -ans;
        if (ans > 180) ans = 360 - ans;
        printf("At %d:%0.2d the angle is %0.1lf degrees.\n", h, m, ans);
    }

    return 0;
}