#include <stdio.h>
/**
 * main - write a program that prints the alphabet in lowercase with \n
 *
 * Return: 0
 *
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'e' && ch != 'q')
	putchar(ch);
	}
	return (0);
}
