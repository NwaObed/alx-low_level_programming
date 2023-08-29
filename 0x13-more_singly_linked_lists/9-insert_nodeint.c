#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: Pointer to the head of the listint_t list.
 * @idx: The index of the listint_t list to add node should be added.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *dup = *head;
	unsigned int node;

	orig = malloc(sizeof(listint_t));
	if (orig == NULL)
		return (NULL);

	orig->n = n;

	if (idx == 0)
	{
		orig->next = dup;
		*head = orig;
		return (orig);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (dup == NULL || dup->next == NULL)
			return (NULL);

		dup = dup->next;
	}

	orig->next = dup->next;
	dup->next = new;

	return (new);
}
