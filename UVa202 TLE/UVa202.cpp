#include <cstdio>
#include <cstring>

const int maxn = 10010;
const int maxm = 5010;

int a, b;
int pows = 1;
char s1[20020];
char s2[20020];
bool f;
int ansi, ansj;

void divv(void) {
	int bei;
	for (int i = 0; i <= maxm; i++) {
	if (s1[i] == 0) s1[i] = '0';
		if (s2[i] == 0) s2[i] = '0';
		bei = bei * 10 + (s1[i] - '0');
		if (bei < b) continue;
		s2[i] = bei / b + '0';
		bei = bei % b;
	}
}

void check(int lenth, int fron) {
	bool fk = 1;
	for (int i = 0; i < lenth; i++) {
		if ((s2[fron + i] != s2[fron + lenth + i]) || (s2[fron + 2 * lenth + i] != s2[fron + i])) {
			fk = 0;
			break;
		}  
	}
	if (fk == 1) f = 1;
}

int main () {
	while (1) {
		scanf("%d", &a);
		if (a == EOF) return 0;
		scanf("%d", &b);
		int ta = a;
		pows = 0;
		while (ta > 0) {
			ta /= 10;
			pows++;
		} 
		memset(s1, 0, sizeof(s1));
		memset(s2, 0, sizeof(s2));
		// printf("%d", pows);
		sprintf(s1, "%d", a);
		// printf("%s", s1);
		divv();
	//debug---------------------------------------------------------------------	
//		for (int i = 0; i <= 2000; i++) printf("%c", s2[i]);
//		printf("\n");
	//---------------------------------------------------------------------	
		f = 0;
		for (int i = 1; i <= b; i++) {
			for (int j = pows; j <= maxm; j++) {
				check(i, j);
				if (f == 1) {
					ansi = i;
					ansj = j;
					break;
				}
			} 
			if (f == 1) break;
		} 
//		printf("%d %d", ansi, ansj);	
//	out:-------------------------------------------------------------------------		
		printf("%d/%d = ", a, b);
		for (int i = 0; i < pows; i++) 
			if (s2[i] != '0' || i == (pows - 1)) printf("%c", s2[i]);
		printf(".");
		for (int i = pows; i < ansj; i++) printf("%c", s2[i]);
//		printf("\n");
		int outansi = ansi;
		if (ansi > 50) outansi = 50;
		printf("(");
		for (int i = 0; i < outansi; i++) printf("%c", s2[i + ansj]);
		printf(")\n");
		printf("   %d = number of digits in repeating cycle\n", ansi);
		printf("\n");
/// --------------------------------------------------------------------		
		
	}
	return 0;
}
