#include <cstdio>
#include <cstring>
#include <cstdlib>


char s[1010];
char s2[1010];
char s3[1010];
char s4[1010];
int main () {
	printf("Please input file name\n");
	scanf("%s", s);
	strcat(s2, "md ");
	strcat(s2, s);
	//printf("%s", s2);
	system(s2);
	strcat(s4, "echo > ");
	strcat(s4, s);
	strcat(s4, "\\");
	strcat(s4, s);
	strcat(s4, ".cpp");
	//printf("%s", s4);
	system(s4);
	
	return 0;
}