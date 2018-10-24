#include <stdio.h>


int addt(int* a, int* b) {
	int* t;
	int sum;
	for (t = a; t <= b; t++) {
		sum += *t;
	}
	return sum;
}

int main () {
	int a[500];
	int i;
	int n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	int tot = addt(a+1, a+n);
	printf("%d", tot);
	return 0;
}