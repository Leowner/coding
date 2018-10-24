#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <algorithm>
using namespace std;

int a[2000];
int main() {
    srand(time(0));
    printf("1\n");
    int n = rand() % 1000;
    printf("%d ", n + 1);
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++) a[i] = rand() % 100000;
    sort(a + 1, a+n+1);
    // for (int i = 1; i <= n; i++) printf("%d ", a[i]);
    a[n+1] = rand() % 100000;
    for (int i = 1; i <= n + 1; i++) printf("%d ", a[i]);
    return 0;
}
