#include "main.h"
/**
* factorial - write a function that returns the factorial of a given number
* @n: the integer to check
* Return: 0
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
