#include <cstdio>
#include <cstring>
#include <cstdlib>

char s1[100100];
char s2[100100];
int len1, len2;


int main () {
	while (scanf("%s %s", s1, s2) == 2) {
		len1 = strlen(s1);
		len2 = strlen(s2);
		int j = 0;
		for (int i = 0; i < len2; i++) {
			if (s1[j] == s2[i]) j++;
			if (j == len1) break;
		}
		if (j == len1) printf("Yes\n");
		else printf("No\n");
	}

	return 0;
}

