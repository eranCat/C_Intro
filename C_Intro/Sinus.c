#include<stdio.h>

double sinus(double x, int n);

void main() {
	double sin1 = sinus(1, 1);
	printf("sin1: %.3lf\n", sin1);

	double sin2 = sinus(1, 2);
	printf("sin2: %.3lf\n", sin2);
}

double sinus(double x, int n) {
	double last = x, sum = x;
	int i;
	for (i = 1; i <= n; i++)
	{
		last *= -x * x / ((2 * i) * (2 * i + 1));
		sum += last;
	}
	return sum;
}