#include <stdio.h>
#include <string.h>

int T;
int tnow = 0;
int n;
int a[20];
int b[20];
int x;
int xmax, xmin;

int chng(int x) {
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	for (int i = 1; i <= 4; i++) {
		a[x % 10]++;
		b[x % 10]++;
		x /= 10;
	}	
	xmin = 0;
	xmax = 0;
	for (int i = 0; i <= 9; i++) {
		while (a[i] > 0) {
			a[i]--;
			xmin *= 10;
			xmin += i;
		}
	}
	for (int i = 9; i >= 0; i--) {
		while (b[i] > 0) {
			b[i]--;
			xmax *= 10;
			xmax += i;
		}
	}
	int ans = xmax - xmin;
	printf("%04d - %04d = %04d\n", xmax, xmin, ans);
	return (ans);
}

int main () {
	scanf("%d", &T);
	while (1) {
		tnow++;
		if (tnow > T) break;
		printf("Case #%d:\n", tnow);
		scanf("%d", &n);
		int p = chng(n);
		while (p != 6174 && p != 0) {
			p = chng(p);
		}
	}
	return 0;
}