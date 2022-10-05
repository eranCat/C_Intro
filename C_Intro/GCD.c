/*
* divisor common greatest
	gcd(270,700)=10

	270=2*3*3*3*5
	700=2*2*5*5*7
*/

#include<stdio.h>

int gcd(int a, int b)
{
	while (a > 0 && b > 0){
		if (a > b)
			a %= b;
		else
			b %= a;
	}
	return a + b;
}

int gcd_1(int a, int b)
{
	int t;
	while (b > 0)
	{
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}

void main() {
	printf("%d\n", gcd_1(270,700));
	printf("%d\n", gcd(270,700));
}