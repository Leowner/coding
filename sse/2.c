#include <stdio.h>

int x;

int main () {

	for(int i = 1; i <= 999; i++) {
		int j = i * i;
		int modd;
		if (i > 0 && i < 10) {
			modd = 10;
		} else if (i >= 10 && i < 100) {
			modd = 100;
		} else {
			modd = 1000;
		}
		if (j % modd == i) printf("%d\n", i);
	}
	return 0;
}