#include "lists.h"
/**
* free_listint2 - a function that frees a listint_t list
* @head: pointer to the start node
* Return: 0
*/
void free_listint2(listint_t **head)
{
	listint_t *l, *update;

	if (head == NULL)
		return;
	update = *head;
	while (update != NULL)
	{
		l = update;
		update = update->next;
		free(l);
	}
	*head = NULL;
}
