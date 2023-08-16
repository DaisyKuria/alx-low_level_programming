#include "main.h"


/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * return: ...
 */
void jack_bauer(void)
{
	int d, k;

	d = 0;

	while (d < 24)
	{
		k = 0;
		while (k < 60)
		{
			_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
			_putchar(':');
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar('\n');
			k++;
		}
		d++;
	}
}

