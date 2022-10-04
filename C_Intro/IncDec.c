#include<stdio.h>

/*Increas and decrese*/
void main() {
	int x = 5, y = 8, z;
	
	z = x++ + --y;//use x's value before inc , and y's value after dec
	// z = 5 + 7
	printf("x=%d, y=%d, z=%d \n", x, y, z);

	z = x-- + y++;//use x's value before dec , and y's value before inc
	// z = 6 + 7s
	printf("x=%d, y=%d, z=%d \n", x, y, z);

}