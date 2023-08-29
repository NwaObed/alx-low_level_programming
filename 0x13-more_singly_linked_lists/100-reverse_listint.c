#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: Pointer to the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *fward, *bward;

	if (head == NULL || *head == NULL)
		return (NULL);

	bward = NULL;

	while ((*head)->next != NULL)
	{
		fward = (*head)->next;
		(*head)->next = behind;
		bward = *head;
		*head = fward;
	}

	(*head)->next = bwardd;

	return (*head);
}
