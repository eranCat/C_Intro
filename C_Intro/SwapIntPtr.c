#include<stdio.h>
/*Swaps between the variables passed from the call*/
void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/*Gets x , y numbers,
* Return by reference in min, max - the corresponding values
*/
void minMax(int x, int y, int* min, int* max) {
	if (x > y) {
		*min = y;
		*max = x;
	}
	else {
		*min = x;
		*max = y;
	}
}

void main() {
	int x = 3, y = 4;
	printf("x=%d, y=%d\n", x, y);
	swap(&x, &y);//call by reference
	printf("x=%d, y=%d\n", x, y);

	int min, max;
	minMax(x, y, &min, &max);
	printf("min=%d, max=%d\n", min, max);

}