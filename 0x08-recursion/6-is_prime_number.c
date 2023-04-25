#include "main.h"
/**
* _prime - write a function that returns 1 if the input int is a
* prime number, otherwise return 0
* @n: int to check
* @c: int to check
* Return: 1 if prime number, otherwise 0
*/
int _prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + _prime(n, c + 1));
}

/**
* is_prime_number - checks to see if inout is prime
* @n: integer to check
* Return: 1 if prime otherwise 0
*/
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (_prime(n, 2));
}
