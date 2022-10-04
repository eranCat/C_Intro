#include<stdio.h>

void main() {
	int miles, yards;
	double kilometers;
	miles = 26;
	yards = 385;
	
	kilometers = 1.609 * (miles + yards / 1760.0);
	printf("print with 'lf' - %lf KM\n", kilometers);//lf - a rational number
	printf("%.3lf KM\n", kilometers);//.3lf - 5 digits after decimal point
}