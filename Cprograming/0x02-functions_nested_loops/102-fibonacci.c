#include <stdio.h>

int main(void)
{
	int i;
       	long firstNum, secondNum, nextNum;
	
	firstNum = 1;
	secondNum = 2;
	nextNum = firstNum + secondNum;
	printf("%ld, %ld, ", firstNum, secondNum);
	for (i = 3; i <= 50; i++)
	{
		if (i < 50)
		{
			printf("%ld, ", nextNum);
		}
		else
		{
			printf("%ld", nextNum);
		}
		firstNum = secondNum;
		secondNum = nextNum;
		nextNum =firstNum + secondNum;
	}
	printf("\n");
	return(0);
	
}
