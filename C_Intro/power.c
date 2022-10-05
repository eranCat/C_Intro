#include<stdio.h>

double power(double base, int exponent) {
	double res = 1;
	for (int i = 1; i <= exponent; i++){
		res *= base;
	}
	return res;
}

void main() {
	double solution = power(2, 20) + power(3, 15) + power(5, 17);
	printf("2 ^ 20 + 3 ^ 15 + 5 ^ 17 = %.3lf", solution);
}