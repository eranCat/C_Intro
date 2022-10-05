#include <stdio.h>
void main()
{
	int grade;
	do
	{
		printf("Enter your grade(0 - 100) \n");
		scanf_s("%d", &grade);
	} while (grade < 0 || grade > 100);
	printf("You entered a legal grade now\n");
}