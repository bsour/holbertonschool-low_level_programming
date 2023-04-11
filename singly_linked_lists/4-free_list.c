#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - frees a list_t list.
 * @head: pointer to the head of the list.
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
