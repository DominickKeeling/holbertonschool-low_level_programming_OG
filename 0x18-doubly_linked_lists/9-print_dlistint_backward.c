#include "lists.h"

/**
 * print_dlistint_backward - prints list in reverse
 *
 * @h: head
 * Return: number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t size = 0;

	const dlistint_t *cur = h;

	if (cur == NULL)
		return (0);

	while (cur->next)
	{
		cur = cur->next;
	}
	while (cur)
	{
		size++;
		printf("%d\n", cur->n);
		cur = cur->prev;
	}
	return (size);
}
