#include "main.h"

void print_times_table(int n)
{
	int row;
	int column;
	int product;
	
	if (n < 15 && n > 0){
	for (row = 0; row <= n; row++)
	{
		_putchar(0 + '0');
				
		for (column = 1; column <= n; column ++)
		{
			product = column * row;
			if (product > 99)
			{
				if (column <= n)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar((product / 100) + '0');
				_putchar((product % 100) / 10 + '0');
				_putchar((product % 100) % 10 + '0');
				
			}
			else if (product > 9)
			{
				if (column <= n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}

				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
				
			}
			else
			{
				if (column <=n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
	}
}
