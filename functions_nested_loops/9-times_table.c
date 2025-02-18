#include "main.h"
/**
 *times_table - Prints every 9 times table
 *
 * Return: the result of every multiplication
 * from every times table from 0 to 9
 */
void times_table(void)
{
	int fact1, fact2;

	for (fact1 = 0; fact1 < 10; fact1++)
	{
		for (fact2 = 0; fact2 < 10; fact2++)
		{
			int prod = (fact1 * fact2);

			if (prod <= 9)
			{
				if (fact2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + 48);
				}
				else
				_putchar(prod + 48);
			}
			else
			{
				if (prod >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((prod / 10) + 48);
					_putchar((prod % 10) + 48);
				}
				else
				{
					_putchar((prod / 10) + 48);
					_putchar((prod % 10) + 48);
				}
			}
		}
		_putchar('\n');
	}
}
