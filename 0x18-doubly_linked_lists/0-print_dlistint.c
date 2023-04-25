#include "lists.h"

/**
* print_dlistint - a function that prints all the elements of a dlistin_t list
* @h: pointer to dlistint_t
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_elements++;
	}
	return (num_elements);
}
