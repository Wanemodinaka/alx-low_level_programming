#include "lists.h"
/**
 * pop_listint - a function that deletes the head
 * node of a listint_t linked list
 * @head: a pointer to the address of the head
 * Return: always (0)
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;
	if (*head == NULL)
		return (0);
	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (data);
}
