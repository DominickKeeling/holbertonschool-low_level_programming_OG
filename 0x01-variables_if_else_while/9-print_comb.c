#include <stdio.h>
/**
 * main - sucess
 *
 * Return: 0
 *
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	n++;
	}
	return (0);
}
