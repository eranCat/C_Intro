#include<stdio.h>

long factorial(int num);

void main() {
	long f = factorial(10);
	printf("%d",f);
}

long factorial(int num) {
	if (num <= 1) return 1;

	return num * factorial(num - 1);
}