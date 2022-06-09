#include "lists.h"
/**
 * check_cycle - Check if a singly linked list has a cycle in it
 * @list: pointer to linked list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *sll = list, *luna = list;

	if (list == NULL)
		return (0);
	while (luna != NULL && luna->next != NULL && luna->next->next != NULL)
	{
		sll = sll->next;
		hare = luna->next->next;
		if (sll == luna)
			return (1);
	}
	return (0);
}
