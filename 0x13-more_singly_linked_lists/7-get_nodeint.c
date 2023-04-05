#include "lists.h"

/**
 * get_nodeint_at_index - gets index node
 * @head: head node
 * @index: index of node
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp;

	tmp = head;
	while (count != index && tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}

	if (count != index)
		return (NULL);
	return (tmp);
}
