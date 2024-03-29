#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of list
 * @head: double pointer to head of node
 * @n: node data
 * Return: a new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;

	new_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;
	return (new_node);
}
