#include "main.h"
#include <stddef.h>
/**
* _strcpy - write a function that copys the string pointed to by src
* including the terminating null byte(\0) to the buffer pointed
* to by dest
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	char *return_ptr = dest;

	if (dest == NULL)
	return (NULL);

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (return_ptr);
}
