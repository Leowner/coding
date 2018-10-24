#include <cstdio>
#include <cstring>

const int maxn = 20020;

char s1[maxn];
char s2[maxn];
char keyy[maxn];
char orii[maxn]; 
int x1;
int x2;
int x3;
int ston[500];
char ntos[500];


int main () {
//	freopen("1.in", "r", stdin);
//	freopen("1.out", "w", stdout);
	for (int i = 0; i <= 9; i++) {
		ston[i + '0'] = i;
	}
	ston['A'] = 10;
	ston['B'] = 11;
	ston['C'] = 12;
	ston['D'] = 13;
	ston['E'] = 14;
	ston['F'] = 15;
	for (int i = 0; i <= 9; i++) {
		ntos[i] =  i + '0';
	}
	for (int i = 1; i <= 6; i++) {
		ntos[i+9] = 'A' - 1 + i;
	}
	
	
while (scanf("%s %s", s1, s2) != EOF) {
	int len2 = strlen(s2);
/*	for (int i = 1; i <= (len >> 1); i++) {
		x1 = ston[s1[i * 2 - 2]] * 16 + ston[s1[i * 2 - 1]];
		x2 = ston[s2[i * 2 - 2]] * 16 + ston[s2[i * 2 - 1]];
		x3 = x1 ^ x2;
		s3[i * 2 - 2] = ntos[x3 / 16];
		s3[i * 2 - 1] = ntos[x3 % 16];
	}
*/
		
	//printf("%s", s3);
	orii[0] = '2';
	orii[1] = '0';
	for (int i = 1; i <= (len2 >> 1); i++) {
		x1 = ston[orii[i * 2 - 2]] * 16 + ston[orii[i * 2 - 1]];
		x2 = ston[s2[i * 2 - 2]] * 16 + ston[s2[i * 2 - 1]];
		x3 = x2 ^ x1;
		keyy[i * 2 - 2] = ntos[x3 / 16];
		keyy[i * 2 - 1] = ntos[x3 % 16];
		x1 = ston[s1[i * 2 - 2]] * 16 + ston[s1[i * 2 - 1]];
		x2 = x3 ^ x1;
		orii[i * 2] = ntos[x2 / 16];
		orii[i * 2 + 1] = ntos[x2 % 16];
	}
	keyy[len2] = '\0';
	printf("%s\n", keyy);
}
	return 0;
}
