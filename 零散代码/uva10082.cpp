#include <cstdio>
#include <cstring>

char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main () {
	char c = getchar();
	while (c != EOF) {
		if (c == '\n' || c == ' ') {
			putchar(c);
			c = getchar();
			continue;
		}
		int i;
		for (i = 0; i < 47; i++) {
			if (s[i] == c) break;
		}
		printf("%c", s[i - 1]);
		c = getchar();
	}

	return 0;
}
