#include <cstdio>
#include <cstring>


const int maxn = 20;
char s[maxn][maxn];
int num[maxn][maxn];
int tot;
int c, r;
int n;

void print2(int xi, int xj) {
	printf(" %d.", num[xi][xj]);
	for (int i = xi; i <= r; i++) {
		if (s[i][xj] == '*') {
			printf("\n");
			return;
		}
		putchar(s[i][xj]);
	}
	putchar('\n');
}
void print1(int xi, int xj) {
	printf(" %d.", num[xi][xj]);
	for (int j = xj; j <= c; j++) {
		if (s[xi][j] == '*') {
			printf("\n");
			return ;
		}
		putchar(s[xi][j]);
	}
	putchar('\n');
}
int main () {
	while (1) {
		n++;
		tot = 0;
		scanf("%d", &r);
		if (r == 0) break;
		scanf("%d", &c);
		memset(num, 0, sizeof(num));
		for (int i = 1; i <= r; i++) {
			getchar();
			for (int j = 1; j <= c; j++) {
				s[i][j] = getchar();
			}
		}
//		for (int i = 1; i <= r; i++) {
//			for (int j = 1; j <= c; j++) {
//				printf("%c", s[i][j]);
//			}
//			printf("\n");
//		}
		for (int i = 1; i <= r; i++) {
			for (int j = 1; j <= c; j++) {
				if (s[i][j] != '*') {
					if (i == 1 || j == 1) {
						tot++;
						num[i][j] = tot;
						continue;
					}
					if (s[i-1][j] != '*' && s[i][j-1] != '*') continue;
					tot++;
					num[i][j] = tot;
				}
			}
		}
//		for (int i = 1; i <= r; i++) {
//			for (int j = 1; j <= c; j++) {
//				printf("%d ", num[i][j]);
//			}
//			printf("\n");
//		}
		printf("puzzle #%d:\n", n);
		printf("Across\n");
		for (int i = 1; i <= r; i++) {
			for (int j = 1; j <= c; j++) {
				if ((s[i][j-1] == '*' || j == 1) && num[i][j] != 0) {
					print1(i, j);
				}
			}
		}
		printf("Down\n");
		for (int i = 1; i <= r; i++) {
			for (int j = 1; j <= c; j++) {
				if ((s[i-1][j] == '*' || i == 1) && num[i][j] != 0) {
					print2(i, j);
				}
			}
		}
		printf("\n");
	}
	

	return 0;
} 
