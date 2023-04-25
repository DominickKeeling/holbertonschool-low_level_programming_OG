#include <stdio.h>
/**
 * main - Sucess
 *
 * Return: 0
 *
 */

int main(void)
{
	int lw;
	int up;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		putchar(lw);
	}
	for (up = 'A'; up <= 'Z'; up++)
	{
		putchar(up);
	}
	putchar('\n');
	return (0);
}
