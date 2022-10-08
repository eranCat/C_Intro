#include<stdio.h>

void reverese() {
	char sc;//scanned char
	//scanf("%c", &sc);
	sc = getchar();

	if (sc != '*') {
		reverese(sc);

		//printf("%c",sc);
		putchar(sc);
	}
	
}

void main() {
	reverese();
}