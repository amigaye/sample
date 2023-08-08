#include "main.h"

void print_number(int n)
{
	int i = 10;
	int digit = 10;
	while (n / i > 9)
	{
		digit *= 10;
	}
/*	_putchar(digit / 10 + '0');
	_putchar(digit % 10 + '0');*/
	
	while (digit >= 10)
	{
		_putchar( n / digit + '0');
		n = n % digit;
		digit /= 10;
		if (digit < 10)
		{
			_putchar( n % digit + '0');
		}
	}	
}
