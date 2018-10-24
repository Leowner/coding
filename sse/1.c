#include <stdio.h>

int a;
int main () {
	printf("Input an integer number:\n");
	scanf("%d", &a);
	if (a % 2) printf("%d is an odd number\n", a);
	else printf("%d is an even number\n", a);
	return 0;
}