#include<stdio.h>
#include<stdlib.h>//library for dynamic memory allocation

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		/* Move elements of arr[0..i-1], that are
		  greater than key, to one position ahead
		  of their current position */
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

/*The function gets an array of size n, and returns the minimal natural number
which isn't in it.
Example:
[9,843,1,3,55,4,200,10,7,2] --> missing 5
[1,2,3,4, - , 7, 9, 10 , 55 , 200,843 ] 
*/
int findMinNatural(int* a, int n) {
	insertionSort(a, n);

	for (int i = 0; i < n; i++)
	{
		printf("%d,", a[i]);
	}
	printf("\n");

	int minNatural = 1;
	int diff;
	for (int i = 0; i < n-1; i++)
	{
		diff = a[i + 1] - a[i];
		if (diff > 1 ) {
			return a[i] + 1;
		}
	}

	return minNatural;
}

void main() {
	int a[] = { 9,843,1,3,55,4,200,10,7,2 };

	int min = findMinNatural(a, sizeof(a) / sizeof(int));

	printf("min natural= %d\n", min);
}