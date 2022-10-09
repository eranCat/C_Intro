#include<stdio.h>

#define ARR1_SIZE 5
#define ARR2_SIZE 9


void printIntArr(int* a,int length) {
	printf("[ ");
	for (int i = 0; i < length; i++)
	{
		printf("%d", a[i]);
		if (i<length-1)
			printf(" ,");
	}
	printf(" ]\n");
}

void printCharArr(char* a,int length) {
	printf("[ ");
	for (int i = 0; i < length; i++)
	{
		printf("%c", a[i]);
		if (i<length-1)
			printf(" ,");
	}
	printf(" ]\n");
}

void reversePrintArr(int* a, int n) {
	printf("[ ");
	for (int i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (i > 0)
			printf(" ,");
	}
	printf(" ]\n");
}


void main() {
	int arr1[] = { 1,2,3,4,5 };
	printf("Arr1:");
	printIntArr(arr1, ARR1_SIZE);

	int arr2[ARR2_SIZE];
	int arr2Len = sizeof(arr2) / sizeof(int);
	printf("Arr2 before init:");
	printIntArr(arr2, arr2Len);
	for (int i = 0; i < arr2Len; i++)
	{
		arr2[i] = (i * 3 + i * 4) * 3 / 5;
	}
	printf("Arr2 after init:");
	printIntArr(arr2, arr2Len);

	printf("Reversed Arr2:");
	reversePrintArr(arr2, arr2Len);

	int arr3[10] = { 0 };//initializes all of the array's cells with 0
	printIntArr(arr3, 10);

	//partial init, the array's size is 5 , but initialized with only 3 first values
	char cArr1[5] = { 'a','b','c' };
	printCharArr(cArr1, 5);

	char cArr2[26] = { 'A' };
	int ca2Length = sizeof(cArr2) / sizeof(char);

	//printCharArr(cArr2, ca2Length);
	for (int i = 1; i < ca2Length; cArr2[i] = cArr2[0] + i++);//fill the array with the next letter 
	
	printCharArr(cArr2, ca2Length);
}