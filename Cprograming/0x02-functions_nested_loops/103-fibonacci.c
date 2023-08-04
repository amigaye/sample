#include <stdio.h>

int main(void)
{
	int i;
	long firstNum, secondNum, nextNum, sum;
	
	firstNum = 1;
	secondNum = 2;
	nextNum = firstNum + secondNum;
	
	sum = 2;
	for (i = 3; i <= 50; i++)
	{
		if (nextNum % 2 == 0 && nextNum < 4000000)
		{
		 	sum += nextNum;
		}
		
		firstNum = secondNum;
		secondNum = nextNum;
		nextNum =firstNum + secondNum;
		
	}
	printf("%ld\n", sum);
	return(0);
	
}
