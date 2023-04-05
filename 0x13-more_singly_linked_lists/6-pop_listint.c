#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head : pointer to the head
 * Return: (n)
 *         or (0) - if linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

temp = *head;

if (temp == NULL)
return (0);

*head = temp->next;
n = temp->n;
free(temp);
return (n);
}
