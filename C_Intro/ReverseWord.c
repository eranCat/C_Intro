#include<stdio.h>

void reverese() {
	char sc;//scanned char
	scanf("%c", &sc);

	if (sc == '*') {
		return;
	}
	
	reverese(sc);

	printf("%c",sc);
}

void main() {
	reverese();
}