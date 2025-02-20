#include "main.h"
/**
 *times_table - Prints every 9 times table
 *
 * Return: the result of every multiplication
 * from every times table from 0 to 9
 */
void print_times_table(int n)
{
	int fact1, fact2;

	if (n > 0 && n < 15)
	{
		for (fact1 = 0; fact1 <= n; fact1++)
		{
			for (fact2 = 0; fact2 <= n; fact2++)
			{
				int prod = fact1 * fact2;
				if (prod < 10 && fact2 > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + 48);
				}
				else if (prod >= 10 && prod < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((prod / 10) + 48);
					_putchar((prod % 10) + 48);
				}
				else if (prod >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((prod / 100) + 48);
					_putchar(((prod / 10) %10) + 48);
					_putchar((prod % 10) + 48);
				}
				else
				_putchar(prod + 48);
			}
		_putchar('\n');
		}
	}
}
