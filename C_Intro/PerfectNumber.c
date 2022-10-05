#include <stdio.h>

typedef enum { false, true } bool;

int round(double d) {
	return d >= 0 ? (int)(d + .5) : (int)(d - .5);
}

int is_square_number(int n)
{
	int sq;
	sq = round(sqrt(n));
	if (n == sq * sq)
		return sq;
	else
		return 0;
}

/*returns the sum of the smaller dividers*/
int sumDividers(int n) {
	if (n==1){
		return 1;
	}

	int sum = 1,i;
	if (is_square_number(n))
	{
		sum += round(sqrt(n));
	}
	for (i = 2; i*i <= n; i++)//i<=sqrt(n)
	{
		if (n % i == 0) {
			sum += i+n/i;
		}
	}

	if (i*i==n){
		sum += i;
	}

	return sum;
}

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

void printIsPerfect(int num) {
	if (isPerfect(num))
		printf("%d is perfect\n", num);
	else
		printf("%d is not perfect\n", num);
}

void main() {

	printIsPerfect(6);
	printIsPerfect(28);
	printIsPerfect(25);
	printIsPerfect(496);
	printIsPerfect(8128);
	printIsPerfect(818);

}