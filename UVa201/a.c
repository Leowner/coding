#include <stdio.h>

#define maxn 20

int n, m;
int x, y;
char c;
int h[maxn][maxn];
int v[maxn][maxn];

int check(int x, int y, int l) {
	int i;
	int is_r = 1;
	for (i = 0; i < l; i++) {
		if ((!h[x][y+i]) || (!h[x+l][y+i]) || (!v[x+i][y]) || !v[x+i][y+l]) {
			is_r = 0;
			break;
		}
	}  
	return(is_r);
}

int main () {
	while (scanf("%d %d", &n, &m) == 2) {
		getchar();
		int i;
		for (i = 1; i <= m; i++) {
			scanf("%c %d %d", &c, &x, &y);
			getchar();
			if (c == 'H') h[x][y] = 1;
			else if (c == 'V') v[x][y] = 1;
		} 
		for (i = 1; i <= n; i++) {
			int j, k;
			int tot = 0;
			for (j = 1; j <=(n-i); j++)
				for (k = 1; k <= (n-i); k++) {
					if (check(j, k, i)) tot++; 
				}
			printf("%d %d\n", i, tot);
		}
	}

	return 0;
}