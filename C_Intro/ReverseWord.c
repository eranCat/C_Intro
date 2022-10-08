#include<stdio.h>

void reverese(char c) {
	if (c == '*') {
		//printf("\n");
		return;
	}
	char sc;//scanned char
	scanf("%c", &sc);
	reverese(sc);

	printf("%c",c);
}

void main() {
	reverese(0);
}