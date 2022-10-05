#include <stdio.h>

typedef enum { false, true } bool;

/*Gets a number , and checks if it's perfect
Perfect number - natural number which equals the sum of all of its smaller dividers
6 = 1+2+3
28=1+2+4+7+14
496= 1+2+4+8+16+31+62+124+248
8128=.... */
bool isPerfect(int n) {
	int sum = sumDividers(n);
	return (bool)(n == sum);
}

/*returns the sum of the smaller dividers*/
int sumDividers(int n) {
	if (n==1){
		return 1;
	}

	int sum = 1;
	for (int i = 2; i <= n/2; i++)
	{
		if (n % i == 0) {
			sum += i;
		}
	}

	return sum;
}

void main() {
	int num = 6;
	printf("%d is perfect: %s\n", num,isPerfect(num)?"true":"false");
	
	num = 28;
	printf("%d is perfect: %s\n", num,isPerfect(num)?"true":"false");
	
	num = 496;
	printf("%d is perfect: %s\n", num,isPerfect(num)?"true":"false");

	num = 8128;
	printf("%d is perfect: %s\n", num,isPerfect(num)?"true":"false");
	
	num = 828;
	printf("%d is perfect: %s\n", num,isPerfect(num)?"true":"false");

}