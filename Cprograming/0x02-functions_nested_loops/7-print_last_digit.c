#include "main.h"

int print_last_digit(int i)
{
	int last_digit;
	if (i < 0)
	{
		last_digit = (i * -1) % 10;
		_putchar(last_digit + '0');
		return(last_digit);
	}
	else
	{
		last_digit = i % 10;
		_putchar(last_digit + '0');
		return(last_digit);
	}
	
}
