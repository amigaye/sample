#include <stdio.h>
/**
* main- print number from 0-100
* if number is multile of 3 and 5 print
* 'Fizz'and 'Buzz' repectively
* when the number is a multiple of both
* 3 & 5 print 'FizzBuz'
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return(0);
}
