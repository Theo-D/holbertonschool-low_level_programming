#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - cycle through every digit from 0 to 9
*
* Return: Every single digit og base 10 starting from 0
*/
int main(void)
{
	int asciinubmers;

	for (asciinubmers = 48 ; asciinubmers < 58 ; asciinubmers++)
	{
		putchar(asciinubmers);
	}
	putchar('\n');
	return (0);
}
