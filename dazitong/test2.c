#include <stdio.h>


int sparseMatrix[6][8];
int reducedMatrix[100][3];
int tot = 0;
int main () {
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 8; j++) {
			scanf("%d", &sparseMatrix[i][j]);
			if (sparseMatrix[i][j] > 0) {
				reducedMatrix[tot][0] = i;
				reducedMatrix[tot][1] = j;
				reducedMatrix[tot][2] = sparseMatrix[i][j]; 
				tot++;
			}
		}
	for (int i = 0; i < tot; i++) {
		printf("%d %d %d\n", reducedMatrix[i][0] + 1, reducedMatrix[i][1] + 1, reducedMatrix[i][2]);
	}
	return 0;
}