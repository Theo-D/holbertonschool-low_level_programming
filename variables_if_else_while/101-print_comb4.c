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
	int numbers;
	int numbers2;
	int numbers3;

	for (numbers = 48 ; numbers < 58 ; numbers++)
	{
		for (numbers2 = numbers + 1 ; numbers2 < 58 ; numbers2++)
		{
			for (numbers3 = numbers2 + 1 ; numbers3 < 58 ; numbers3++)
			{

				putchar(numbers);
				putchar(numbers2);
				putchar(numbers3);
				if (numbers != 55 || numbers2 != 56 || numbers3 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

