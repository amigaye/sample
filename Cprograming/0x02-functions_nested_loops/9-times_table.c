#include "main.h"

void times_table(void)
{
	int row;
	int column;
	int product;

	for (row = 0; row <= 9; row++)
	{
		_putchar(0 + '0');
		_putchar(',');
		_putchar(' ');
		for (column = 1; column <= 9; column ++)
		{
			product = column * row;
			if (product > 9)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
				if (column != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(' ');
				_putchar(product + '0');
				if (column !=9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
