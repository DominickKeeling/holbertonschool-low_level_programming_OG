#include "main.h"
/**
 * _isalpha - write a function that checks for alphabetic character
 *
 * @c: the character to check
 * Return: 1 if c is a lowercase or an uppercase letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
