#include "lists.h"

/**
 * add_nodeint - adds a new nodes at the beginning of a listint_t list.
 * @head: A pointer to the address
 *
 * @n: the integer for the new nodes to contain
 * Return: if the function fail - NULL.
 * otherwise - the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
