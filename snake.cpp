#include <stdio.h>
#include <math.h>

const int maxn = 15;
int a[maxn][maxn];
int n;
int tot = 1;

//void print(void) {
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) printf("%d ", a[i][j]);
//		printf("\n");
//	}
//	printf("%d\n", tot);
//}

int main () {
	scanf("%d", &n); 
	int maxm = n * n;
	int curx = 1, cury = n;
	a[curx][cury] = 1;
	while (tot < maxm) {
		while (curx < n && a[curx + 1][cury] == 0) {
			a[++curx][cury] = ++tot;
//			print();
		}
		while (cury > 1 && a[curx][cury - 1] == 0) {
			a[curx][--cury] = ++tot;
//			print();
		}
		while (curx > 1 && a[curx - 1][cury] == 0) {
			a[--curx][cury] = ++tot;
//			print();
		}
		while (cury < n && a[curx][cury + 1] == 0) {
			a[curx][++cury] = ++tot;
//			print();
		}
	}
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
