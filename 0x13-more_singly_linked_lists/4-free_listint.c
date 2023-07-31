#include "lists.h"

/**
 * free_listint - frees a linked list struc
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tempp;

	while (head)
	{
		tempp = head->next;
		free(head);
		head = tempp;
	}
}
