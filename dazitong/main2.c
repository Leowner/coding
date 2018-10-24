#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define maxn 1010

char c;
char s[maxn];


void anss(int tot, int toth, int c1, int c2) {
	if (tot == 0) printf("Total hits : %d \n Missed hits : %d \n Accuracy : %lf \n Test time : %d \n", toth, toth - tot, 0.0, (c2 - c1) / CLOCKS_PER_SEC);
	else printf("Total hits : %d \n Missed hits : %d \n Accuracy : %lf \n Test time : %d \n", toth, toth - tot, (double)(tot) / (toth), (c2 - c1) / CLOCKS_PER_SEC);
}

void ty(void) {
	int i;
	for (i = 1; i <= 10; i++) s[i] = rand() % 26 + 'A';
	int tot = 0;
	int toth = 0;
	int prespa = 0;
	int c1 = clock();
	for (i = 1; i <= 10; i++) {
		prespa = rand() % 80;
		int j;
		for (j = 1; j <= prespa; j++) putchar(' ');
		putchar(s[i]);
		tot++;
		while (1) {
			c = getch();
			toth++;
			if (c == s[i]) break;
			else if (c == 27) {
				toth--;
				tot--;
				putchar('\n');
				int c2 = clock();
				anss(tot, toth, c1, c2);
			} 
		}
		putchar('\a');
		putchar('\n');
	}	
	int c2 = clock();
	anss(tot, toth, c1, c2);
	
	
}

int main () {
	srand(time(0));
	int ll;
	for (ll = 1; ll <= 100; ll++) {
		ty();
	}
	return 0;
}