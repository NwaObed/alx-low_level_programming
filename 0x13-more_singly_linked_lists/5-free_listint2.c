#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to the head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *var;

	if (head == NULL)
		return;

	while (*head)
	{
		var = (*head)->next;
		free(*head);
		*head = var;
	}

	head = NULL;
}
