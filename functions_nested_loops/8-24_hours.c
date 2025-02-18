#include "main.h"

/**
 *jack_bauer - Loops through every numbers from 0 to 59
 * and every numbers from 0 to 23 and prints them after
 * parsing
 *
 * Return: every minutes within a day to the format hh:mm
 */

void jack_bauer(void)
{
	int heures = 0;
	int minutes;

	while (heures < 24)
	{
		minutes = 0;
		while (minutes < 60)
		{
			_putchar((heures / 10) + 48);
			_putchar((heures % 10) + 48);
			_putchar(':');
			_putchar((minutes / 10) + 48);
			_putchar((minutes % 10) + 48);
			_putchar('\n');
			minutes++;
		}
		heures++;
	}
}
