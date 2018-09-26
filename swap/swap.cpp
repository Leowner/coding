#include <cstdio>
#include <cstring>


int swap(int c, int d) {
	int tem;
	tem = c;
	c = d;
	d = tem;
	printf("c = %d; d = %d\n", c, d);
	return 0;
}

int main () {
	int a, b;
	scanf("%d %d", &a, &b);
	swap(a, b);
	printf("a = %d ; b = %d\n", a, b);
	

	return 0;
}
