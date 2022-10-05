#include<stdio.h>

/*The program calculates the factorial of 10 (10!)*/
void main()
{
	int i = 2, result = 1;
	while (i <= 10)
	{
		result *= i++;
	}
	printf("The result is % d", result);
}