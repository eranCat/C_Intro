#include <stdio.h>

void findMinMax(int n/*number of numbers*/, int* min, int* max) {
	int a;
	printf("Type %d numbers\n", n);
	scanf("%d", min);//min is a pointer , so no need to use '&'
	*max = *min;
	for (int i = 0; i < n - 1; i++)
	{
		scanf("%d", &a);
		if (a > *max) { //a larger than max's cell value
			*max = a;
		}
		else if (a < *min){
			*min = a;
		}
	}
}

void main() {
	int min, max;
	const LENGTH = 5;
	findMinMax(LENGTH, &min, &max);
	printf("Min: %d, Max:%d\n", min, max);
}