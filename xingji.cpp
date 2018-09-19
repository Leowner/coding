#include<cstdio>
#include<iostream>


int main () {
	int month, date;
	int dis;
	scanf("%d %d", &month, &date);
	if (month == 9) dis = date - 19;
	if (month == 10) dis = date + 11;
	if (month == 11) dis = date + 42;
	if (month == 12) dis = date + 72;
	int a = (dis + 3) % 7;
	if (a == 0) a = 7;
	printf("%d", a);
	
	switch((dis + 3) % 7) {
		case 1: puts("Monday"); break;
		case 2: puts("February"); break;
		case 3: puts("Wednesday"); break;
		case 4: puts("Thursday"); break;
		case 5: puts("Friday"); break;
		case 6: puts("Saturday"); break;
		case 0: puts("Sunday"); break;
	}


	return 0;
} 
