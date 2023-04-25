#include "main.h"

/**
 * print_alphabet_x10 - print 10
 *
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
