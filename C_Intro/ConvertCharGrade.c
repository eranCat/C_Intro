#include<stdio.h>

void main() {
	char grade;
	printf("Enter a grade - A\B\C \n");
	grade = getchar(); // the function (from stdio) reads one character and stores it in grade
	//grade = scanf_s(“%c”,&grade);
	switch (grade)
	{
	case 'A':
		printf("90 - 100\n");
		break;
	case 'B':
		printf("80 - 89\n");
		break;
	case 'C':
		printf("70 - 79\n");
		break;

	default:
		printf("Error!\n");

	}
}