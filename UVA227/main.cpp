#include <cstdio>
#include <cstring>

bool f;
char s[10][10];
char stem[20];
char c;
int curx, cury;
int main () {
	int n = 0;
    while (1) {
		n++;
		printf("Puzzle #%d:\n", n);
        for (int i = 0; i < 5; i++) {
            gets(stem);
            if (stem[0] == 'Z') return (0);
            if (stem[4] == '\0') stem[4] = ' ';
            for (int j = 0; j < 5; j++) {
				s[i][j] = stem[j];
                if (s[i][j] == ' ') {
					curx = i;
					cury = j;
                }
            }
        }
        int slen = -1;
		char c;
		memset(stem, 0, sizeof(stem));
		while (1) {
			c = getchar();
			if (c == ' ' || c == '\n') continue;
			stem[++slen] = c;
			if(c == '0') break;
		}
        f = 0;

////        printf("%s", stem);

        for (int j = 0; j < slen; j++) {
			if (stem[j] == 'A') {
				if (curx == 0) {
					f = 1;
					break;
				}
                s[curx][cury] = s[curx-1][cury];
                s[curx-1][cury] = ' ';
                curx--;
			} else if (stem[j] == 'R') {
                if (cury == 4) {
					f = 1;
					break;
                }
                s[curx][cury] = s[curx][cury+1];
                s[curx][cury+1] = ' ';
                cury++;
			} else if (stem[j] == 'L') {
				if (cury == 0) {
					f = 1;
					break;
				}
				s[curx][cury] = s[curx][cury-1];
				s[curx][cury-1] = ' ';
				cury--;
			} else if (stem[j] == 'B') {
				if (curx == 4) {
					f = 1;
					break;
				}
				s[curx][cury] = s[curx+1][cury];
				s[curx+1][cury] = ' ';
				curx++;
			}
        }
        if (f == 1) {
			printf("This puzzle has no final configuration.\n");
        } else {
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 4; j++) {
					printf("%c ", s[i][j]);
				}
				printf("%c\n", s[i][4]);
			}
        }
        printf("\n");
    }


	return 0;
}
