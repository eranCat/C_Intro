#include<stdio.h>

//for scanning a char, there's an issue with "%c" , so we need to put a space like so " %c"
//https://stackoverflow.com/questions/13542055/how-to-do-scanf-for-single-char-in-c


//void main() {
//	double x, y;
//	char op;
//
//	printf("enter two operands\n");
//	scanf_s("%lf%lf", &x, &y);
//
//	//flushall();//clear console
//	_flushall();//clear console
//
//	printf("enter operator\n");
//	scanf_s(" %c", &op);// op=getchar();
//
//	switch (op)
//	{
//	case '+': printf("Result is % lf\n", x + y);
//		break;
//	case '-': printf("Result is % lf\n", x - y);
//		break;
//	case '*': printf("Result is % lf\n", x * y);
//		break;
//	case '/': if (fabs(y) >= 0.00000001) printf("Result is % lf\n", x / y);
//			  else printf("Error\n");
//		break;
//	default: printf("Invalid operator\n");
//	}
//}