#include <stdio.h>

int *p, *q, *u; 	// 每个*只修饰一个指针变量
int a, b;
p = &a;
b = *p;

int main () {
	int* a = malloc(1000 * sizeof(int)); 	// 动态内存分配 malloc 内存分配在堆空间中
	free(a);								// 内存回收, 只回收一次
	//  注意避免内存泄漏
	// 指针++ ，表示指针增加sizeof(指针指向的类型)
	// 使用%p 表示输出指针
	// C++中 迭代器++指向下一个对象
	printf("%d", sizeof(int*));
	// C语言中，数组和指针很相似，但有区别。数组不可变，指针可变。函数传递时，数组以指针形式传递。
	// 指针的大小是sizeof， 数组的大小是num * sizeof
	// 指针可以++来进行访问，但数组不能++， 可以使用*(a+3)来使用
	int * head = NULL; // 指针的安全的初始值为NULL
	//  *head.day  和 head -> day 效果相同
	// while (n --> 0) 
	// IOCCC 混乱代码比赛
	// 指针需要赋初值NULL
	return 0;
}