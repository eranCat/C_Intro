#include<stdio.h>

//void main()
//{
//	int i, j;
//	double p = 5.7;
//	//when setting a double to an int variable,
//	//it implicitly casts it to int , thus clipping the number after the decimal point
//	
//	i = ++p;//i = 6 , p = 6.7
//	i *= p--;//i = 6*6.7 = 40 (int), p=5.7
//	i = j = p - 1; // i = j = 4
//	//++i happens before * or /
//	j = 6 + (i * ++i);//j = 6+(5*5)=31 , i= 5
//
//	printf("i= %d, j = %d, p=%.1lf \n", i, j, p);//i=5 , j=31, p=5.7
//	
//	j = 6 + (i-- * ++i);//j=6+ (6*6)=42 , i = 5
//	
//	printf("i= %d, j = %d\n", i, j);//i=5 , j=42
//	
//	printf("i= %d ,j = %d \n", ++i, j--);//i=6, j=42
//}