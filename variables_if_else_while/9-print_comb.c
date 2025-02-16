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

	for (asciinubmers = 48 ; asciinubmers < 58 ; asciinubmers++)
	{
		putchar(asciinubmers);
		if (asciinubmers != 57)
		{
			putchar(',');
			putchar(' ');
		}	
	}
	putchar('\n');
	return (0);
}