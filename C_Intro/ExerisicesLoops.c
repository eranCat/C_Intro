#include<stdio.h>
/*3, 1, 5, 7, 2, -3, 2, 5, 7, 1, 5, 5, 1, 4 -> 4
3, 1, 5, 7, 2, -3, 2, 5, 7, 1, 5, 5, 1, 4 -> 0*/
void NumSequence()
{
	/*Input a set for numbers
	* count the number of rising numbers
	*/
	int n;
	printf("Enter num of numbers:\n");
	scanf_s("%d", &n);

	int numOfSeq = 0;//number of sequences that are rising regarding each other
	int seqLength = 1;
	int num1, num2;

	printf("num 1:\n");
	scanf_s("%d", &num1);

	for (int i = 1; i < n; i++)
	{
		printf("num %d:\n", (i + 1));
		scanf_s("%d", &num2);
		if (num1 < num2) {
			seqLength++;
			//if the last number
			if (i==n-1)
			{
				//if the length of the last sequence is at least 2
				if (seqLength >= 2)
					numOfSeq++;
			}
		}
		else {
			if (seqLength >= 2)//the sequence length is at least 2
			{
				numOfSeq++;
			}
			seqLength = 1;
		}

		num1 = num2;
	}

	printf("Num of sequences: %d\n", numOfSeq);
}

void main() {

	NumSequence();
}