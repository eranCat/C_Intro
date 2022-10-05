#include<stdio.h>

double power(double base, int exponent);
double sum_powers_2(double a, int n);

void main() {
	double solution = power(2, 20) + power(3, 15) + power(5, 17);
	printf("2 ^ 20 + 3 ^ 15 + 5 ^ 17 = %.3lf\n", solution);

	printf("sum powers: %.3lf\n", sum_powers_2(3, 5));
}

double power(double base, int exponent) {
	double res = 1;
	for (int i = 1; i <= exponent; i++) {
		res *= base;
	}
	return res;
}

/*a^1 + a^2 + a^3 + ... + a^n*/
double sum_powers_2(double a, int n){
	double sum = 0, mult = 1;
	int i;

	for (i = 1;i <= n;i++)
	{
		mult *= a;
		sum += mult;
	}
	return sum;
}