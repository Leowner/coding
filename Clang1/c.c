#include <stdio.h>

int a;
int *b;
int main () {
	b = &a;
	printf("%d %d", b, &a);

	return 0;
}