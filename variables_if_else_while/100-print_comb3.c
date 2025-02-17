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
	int asciinubmers;
	int asciinubmers2;

	for (asciinubmers = 48 ; asciinubmers < 58 ; asciinubmers++)
	{
		for (asciinubmers2 = asciinubmers + 1 ; asciinubmers2 < 58 ; asciinubmers2++)
		{
			putchar(asciinubmers);
			putchar(asciinubmers2);
			if (asciinubmers != 56 || asciinubmers2 != 57) /*Pourquoi || et pas && ?*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
