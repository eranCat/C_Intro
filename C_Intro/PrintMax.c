#include<stdio.h>

void main() {
	int a=0, b=0;
	printf("Enter 2 numbers\n");
	scanf_s("%d%d", &a, &b);

	int max;
	//using if - find max
	if (a>b)
	{
		max = a;
	}
	else {
		max = b;
	}

	printf("%d is max\n", max);

	//using trinary expression
	max = (a > b) ? a : b;
	printf("%d is max\n", max);

}