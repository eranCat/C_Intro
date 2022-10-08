#include<stdio.h>

void reverese() {
	char sc;//scanned 
	sc = getchar();//scanf("%c", &sc);

	if (sc != '*') {
		reverese(sc);
		putchar(sc);//printf("%c",sc);
	}
}

void main() {
	reverese();
}