#include "lists.h"

/**
 * listint_len - returns the numbers of element in a linked lists struc
 * @h: linked list of type listint_t to traverse
 *
 * Return: numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
