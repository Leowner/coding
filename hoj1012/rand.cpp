#include <cstdio>
#include <cstdlib>
#include <ctime>


int main () {
for (int j = 1; j <= 10; j++) {
	srand(time(0));
	int n;
	n = rand() % 10000 + 1;
	for (int i = 1; i <= 2*n; i++) {
		int p = rand() % 16;
		if (p <= 9) printf("%d", p);
		else printf("%c", p + 'A' - 10);
	}
	printf("\n");
	for (int i = 1; i <= 2*n+2; i++) {
		int p = rand() % 16;
		if (p <= 9) printf("%d", p);
		else printf("%c", p + 'A' - 10);
	}
	printf("\n");
}
 	return 0;
}