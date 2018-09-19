#include<cstdio>
#include<iostream>

int monthDay[20] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
int main () {
	int year, month, date;
	int dis = 0;
	scanf("%d %d %d", &year, &month, &date);
/*	
	if (month == 9) dis = date - 19;
	if (month == 10) dis = date + 11;
	if (month == 11) dis = date + 42;
	if (month == 12) dis = date + 72;
*/
	for (int i = 2019; i < year; i++) {
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) dis += 366;
		else dis += 365;
 	} 
/*
	31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	
*/
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
