#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

#define maxn 1010

char c;
char s[maxn];

void ty(void) {
    int totr = 0;
    int tot = 80;
    int i;
    printf("\n\n");
    for (i = 1; i <= 80; i++) {
        s[i] = rand() % 26 + 'A';
        printf("%c", s[i]);
    }
    printf("\nready?\n");
    system("PAUSE");
    int c1 = clock();
    for (i = 1; i <= 80; i++) {
        c = getche();
        if (c == 27) exit(0);
        if (c == s[i]) totr++;
    }
    int c2 = clock();
    printf("\nAccuracy : %lf   time used: %ds \n", (double)totr / (double)tot, (c2 - c1) / CLOCKS_PER_SEC);
    system("PAUSE");
}

int main() {
//    c = getche();
//    printf("%c", c);
    srand(time(0));
    int ll;
    for (ll = 1; ll <= 100; ll++) {
        ty();
    }
    return 0;
}
