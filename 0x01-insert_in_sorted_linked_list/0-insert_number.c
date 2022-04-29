#include <stdlib.h>
#include "lists.h"
/**
 * insert_node - inserts a new node at the list_t list.
 * Description: add node to list.
 * @head: head of list.
 * @number: integer value to insert
 * Return: address of the new node, or NULL if it failed
 */
 **/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newNode, *tmp = *head;

	newNode = malloc(sizeof(listint_t)); /*allocate memory for new node*/
	if (newNode == NULL)  /*check if memory allocation failed*/
		return (NULL);
	newNode->n = number;
	if (*head == NULL) /*if list is empty*/
	{
		newNode->next = NULL;
		*head = newNode;
		return (newNode);
	}
	{
		*head = newNode;
		newNode->next = NULL;
		return (newNode);
	}
	if (tmp->next == NULL)
	{ /*if list has only one node*/
		newNode->next = NULL;
		tmp->next = newNode;
		return (newNode);
	}
	if (number <= tmp->n)
	{
		newNode->next = tmp;
		*head = newNode;
		return (newNode);
	}
	while (tmp->next != NULL)
	{/*how many elements? more than one*/
		if (number <= tmp->next->n)
		{
			newNode->next = tmp->next;
			tmp->next = newNode;
			return (newNode);
		}
		tmp = tmp->next;
	}
	tmp->next = newNode;
	newNode->next = NULL;
	return (newNode);
}
