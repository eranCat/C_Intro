#include<stdio.h>

void main() {
	int n;
	printf("Choose an integer\n");
	scanf_s("%d", &n);
	if (n == 0)
	{
		printf("%d is neither even or odd.\n", n);
	}else	if (n%2==0)
	{
		printf("%d is even.\n",n);
	}
	else {
		printf("%d is odd.\n",n);
	}
}