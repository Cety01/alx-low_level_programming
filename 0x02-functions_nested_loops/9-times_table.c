#include "main.h"

/**
  * times_table - prints the 9 times table
  *
  */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			int product = i * j;

			if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}
		}
		_putchar('\n');
	}
}
