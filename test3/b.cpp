#include<stdio.h>
int main()
{
	int x, y;
	printf("请输入两个整数：");
	scanf("%d%d",&x,&y);
	double z;
	z = ((double)x/(double)y)*100.0;
	printf("%d is %.1f percent of %d",x,z,y);
	return 0;
}