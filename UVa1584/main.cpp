#include <cstdio>
#include <cstring>
const int maxn = 200;
char s[200];
int n;
int rank[300];
int minNum;


int main () {
	scanf("%d", &n);
	while (n--) {
		scanf("%s", s);
		memset(rank, 127, sizeof(rank));
		int slen = strlen(s);
		for(int i = 0; i < slen; i++) {
			bool f = 0;
			for (int j = 0; j < slen; j++) {
				if (s[(i + j) % slen] > rank[j]) {
					f = 1;
					break;
				} else if (s[(i +j) % slen] < rank[j]) {
					break;
				}
			}
			if (f == 1) continue;
			for (int j = 0; j < slen; j++) {
				rank[j] = s[(i + j) % slen];
			}
		}
		for (int i = 0; i < slen; i++) printf("%c", rank[i]);
		printf("\n");
	}


	return 0;
}

