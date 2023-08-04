#include <stdio.h>

int main(void)
{
	int i;
       	double firstNum, secondNum, nextNum;
	
	firstNum = 1;
	secondNum = 2;
	nextNum = firstNum + secondNum;
	printf("%.f, %.f, ", firstNum, secondNum);
	for (i = 3; i <= 98; i++)
	{
		if (i < 98)
		{
			printf("%.f, ", nextNum);
		}
		else
		{
			printf("%.f", nextNum);
		}
		firstNum = secondNum;
		secondNum = nextNum;
		nextNum =firstNum + secondNum;
	}
	printf("\n");
	return(0);
	
}
