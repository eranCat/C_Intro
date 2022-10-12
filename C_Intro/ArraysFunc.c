//#include<stdio.h>
//
//void printIntArr(int a[], int length);
//void inputArray(int a[], int size);
//int sumArr(int* a, int length);
//int findMin(int a[], int length);//O(n-1)
//int findMin2(int a[], int n);//O(n-1)
//int minRecursive(int* a, int n);
//
//void main() {
//	int arr[3];
//	inputArray(arr, 3);
//	printIntArr(arr, 3);
//
//	int sum = sumArr(arr,3);
//	printf("Sum: %d\n", sum);
//
//	int min = findMin(arr, 3);
//	printf("Min %d\n", min);
//
//	min = findMin2(arr,3);
//	printf("Min (high low) %d\n", min);
//
//	min = minRecursive(arr, 3);
//	printf("Min Rec' %d\n", min);
//
//}
//
//void printIntArr(int a[], int length) {
//	printf("[ ");
//	for (int i = 0; i < length; i++)
//	{
//		printf("%d", a[i]);
//		if (i<length-1)
//			printf(" ,");
//	}
//	printf(" ]\n");
//}
//
//void inputArray(int a[], int size) {
//	printf("Enter %d numbers:\n",size);
//	for (int i = 0; i < size; i++)
//	{
//		scanf("%d", a + i);//a+i = &a[i]
//	}
//}
//
//int sumArr(int* a, int length) {
//	int sum = 0;
//	//for (int i = 0; i < length; sum += a[i++]);
//	for (int i = 0; i < length; sum += *a++,i++);
//	return sum;
//}
//
//int findMin(int a[], int length) {
//	int min = a[0];
//	for (int i = 1; i < length; i++)
//	{
//		if (a[i]< min)
//		{
//			min = a[i];
//		}
//	}
//	return min;
//}
//
///* low -> [4,1,6,3] <- high */
//int findMin2(int a[], int n) {
//	int* low = a;
//	int* high = a + n - 1;//&a[n-1]
//
//	while (low < high) {
//		if (*low < *high) {
//			high--;
//		}
//		else {
//			low++;
//		}
//	}
//	return *low;
//}
//
//int minRecursive(int* a, int n) {
//	if (n == 1)
//		return a[0];
//
//	int min = minRecursive(a, n - 1);//find min of a smaller array
//	if (a[n - 1] < min)//if the last cell of the current array is smaller the the min of the array before it
//		return a[n - 1];//return last cell
//
//	return min;
//}