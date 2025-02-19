#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - cycle through every digit from 0 to 9
*
* Return: prints every combination of every base 10
* single digits separated by ", "
*/
int main(void)
{
	int number1, number2;

	for (number1 = 0; number1 <= 98; number1++)
	{
		for (number2 = number1 + 1; number2 <= 99; number2++)
		{
			putchar((number1 / 10) + 48);
			putchar((number1 % 10) + 48);
			putchar(' ');
			putchar((number2 / 10) + 48);
			putchar((number2 % 10) + 48);
			if (number1 != 98 || number2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

