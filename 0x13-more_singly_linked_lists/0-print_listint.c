#include "lists.h"

/**
 * print_listint - prints elements of list
 * @h: head of the list
 *
 * Return: the nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *pointer = h;
	size_t count = 0;

	while (pointer != NULL)
	{
		printf("%d\n", pointer->n);
		count += 1;
		pointer = pointer->next;
	}
	return (count);
}
