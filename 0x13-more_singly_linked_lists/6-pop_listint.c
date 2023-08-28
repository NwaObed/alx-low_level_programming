#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: Pointer to the head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *var;
	int ret;

	if (*head == NULL)
		return (0);

	var = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(var);

	return (ret);
}
