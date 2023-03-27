#include "lists.h"

/**
* dlistint_len - a function that returns the number of elements in a linked
* dlistint_t list
* @h: pointer to the struct list
* Return: number of elements/ nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int num_elements = 0;

	if (h == NULL)
		return (num_elements);
	while (h->prev == NULL)
		h = h->prev;
	while (h != NULL)
	{
		num_elements++;
		h = h->next;
	}
	return (num_elements);
}
