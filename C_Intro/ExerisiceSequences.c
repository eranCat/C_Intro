//#include<stdio.h>
///*3, 1, 5, 7, 2, -3, 2, 5, 7, 1, 5, 5, 1, 4 -> 4
//3, 1, 5, 7, 2, -3, 2, 5, 7, 1, 5, 5, 1, 4 -> 0*/
//void MyNumSequence()
//{
//	/*Input a set for numbers
//	* count the number of rising numbers
//	*/
//	int n;
//	printf("Enter num of numbers:\n");
//	scanf_s("%d", &n);
//
//	int numOfSeq = 0;//number of sequences that are rising regarding each other
//	int seqLength = 1;
//	int num1, num2;
//
//	printf("num 1:\n");
//	scanf_s("%d", &num1);
//
//	for (int i = 1; i < n; i++)
//	{
//		printf("num %d:\n", (i + 1));
//		scanf_s("%d", &num2);
//		if (num1 < num2) {
//			seqLength++;
//			//if the last number
//			if (i==n-1)
//			{
//				//if the length of the last sequence is at least 2
//				if (seqLength >= 2)
//					numOfSeq++;
//			}
//		}
//		else {
//			if (seqLength >= 2)//the sequence length is at least 2
//			{
//				numOfSeq++;
//			}
//			seqLength = 1;
//		}
//
//		num1 = num2;
//	}
//
//	printf("Num of sequences: %d\n", numOfSeq);
//}
//
//void NumSequenceSolution1() {
//	int i, counter = 0, num_prev, num_cur, in = 0, n;
//	printf("enter length of the sequence\n");
//	scanf_s("%d", &n);
//	printf("enter %d integers\n", n); scanf_s("%d", &num_prev);
//	for (i = 2;i <= n; i++)
//	{
//		scanf_s("%d", &num_cur);
//		if (num_cur > num_prev)
//		{
//			while ((num_cur > num_prev) && i < n) //must check i<n before scanf_s
//			{
//				num_prev = num_cur;
//				i++;
//				scanf_s("%d", &num_cur);
//			}
//			counter++;
//		}
//		num_prev = num_cur;
//	}
//	printf("the number of increasing sequences is % d\n", counter);
//}
//
//void NumSequenceSolution2() {
//	int i, counter = 0, num_prev, num_cur, in = 0, n;
//	
//	printf("enter length of the sequence\n");
//	scanf_s("%d", &n);
//
//	printf("enter %d integers\n", n);
//	scanf_s("%d", &num_prev);
//	
//	for (i = 2;i <= n; i++)
//	{
//		scanf_s("%d", &num_cur);
//		if (in == 0) //out of an increasing sequence
//		{
//			if (num_cur > num_prev) //beginning of a new increasing sequence
//			{
//				in = 1;
//				counter++;
//			}
//		}
//		else //in==1
//			if (num_cur <= num_prev) //end of an increasing sequence
//				in = 0;
//		num_prev = num_cur;
//	}
//	printf("the number of increasing sequences is % d\n", counter);
//}
//
//void main() {
//	MyNumSequence();
//	//NumSequenceSolution1();
//	//NumSequenceSolution2();
//}