#include "lists.h"

/**
 * free_list - frees list
 * @head: linked list head.
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
