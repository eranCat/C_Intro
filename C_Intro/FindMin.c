#include<stdio.h>
#include<limits.h>

/*The program finds min number in a set of numbers from input*/
void main() {
	int min = INT_MAX;
	int n,num;

	printf("Enter the number of numbers:\n");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("Enter num:\n");
		scanf_s("%d", &num);
		if (num<min)
		{
			min = num;
		}
	}

	printf("The min is %d.\n", min);
}