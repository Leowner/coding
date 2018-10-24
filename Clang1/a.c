#include <stdio.h>


typedef struct {
	int year;
	int month;
	int day;
} Date;				//  结尾必须有分号

Date days[1010];
int n;

int cmp(Date a, Date b) {
	int aa = a.year*366 + a.month * 31 + a.day;
	int bb = b.year*366 + b.month * 31 + b.day;
	return (aa > bb);
}

int main () {
	scanf("%d", &n);
	int i;
	for (i = 1; i <= n; i++) {
		scanf("%d %d %d", &days[i].year, &days[i].month, &days[i].day);
	}
	int j;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++) {
			if (cmp(days[j], days[j+1])) {
				Date t = days[j];
				days[j] = days[j+1];
				days[j+1] = t;
			}
		}
	for (i = 1; i <= n; i++) printf("%04d%02d%02d \n", days[i].year, days[i].month, days[i].day);
	return 0;
}