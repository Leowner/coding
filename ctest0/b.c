#include <stdio.h>

#define maxn 303000

int fing[maxn], gl[maxn];
int T;
int n;

int checkf(void) {
    for (int i = 1; i <= n; i++) {
        if (fing[i] > gl[i]) return 0;
    }
    return 1;
}
int checkb(void) {
    for (int i = 1; i <= n; i++) {
        if (fing[i] > gl[n+1-i]) return 0;
    }
    return 1;
}
int main () {
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%d", &fing[i]);
        }
        for (int i = 1; i <= n; i++) {
            scanf("%d", &gl[i]);
        }
        int c1 = checkf();
        int c2 = checkb();
        if (c1 && c2) printf("both\n");
        else if (c1 && (!c2)) printf("front\n");
        else if (!(c1) && c2) printf("back\n");
        else printf("none\n");
    }

    return 0;
}