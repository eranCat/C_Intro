#include<stdio.h>

void printIntArr(int a[], int length);
void inputArray(int a[], int size);
int sumArr(int* a, int length);
int findMin(int a[], int length);//O(n-1)
int findMin2(int a[], int low, int high);//O(n-1)

void main() {
	int a1[3];
	inputArray(a1, 3);
	printIntArr(a1, 3);

	int sum = sumArr(a1,3);
	printf("Sum: %d\n", sum);

	int min = findMin(a1, 3);
	printf("Min %d\n", min);

	min = findMin2(a1, 0, 3 - 1);
	printf("Min (high low) %d\n", min);
}

void printIntArr(int a[], int length) {
	printf("[ ");
	for (int i = 0; i < length; i++)
	{
		printf("%d", a[i]);
		if (i<length-1)
			printf(" ,");
	}
	printf(" ]\n");
}

void inputArray(int a[], int size) {
	printf("Enter %d numbers:\n",size);
	for (int i = 0; i < size; i++)
	{
		scanf("%d", a + i);//a+i = &a[i]
	}
}

int sumArr(int* a, int length) {
	int sum = 0;
	//for (int i = 0; i < length; sum += a[i++]);
	for (int i = 0; i < length; sum += *a++,i++);
	return sum;
}

int findMin(int a[], int length) {
	int min = a[0];
	for (int i = 1; i < length; i++)
	{
		if (a[i]< min)
		{
			min = a[i];
		}
	}
	return min;
}

/* low -> [4,1,6,3] <- high */
int findMin2(int a[], int low,int high) {
	while (low < high) {
		if (a[low] < a[high]) {
			high--;
		}
		else {
			low++;
		}
	}
	return a[low];
}