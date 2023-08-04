#include <stdio.h>

int main(void)
{
	int i, sum;
	
	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return(0);
}
