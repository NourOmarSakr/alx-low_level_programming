#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 * Return: the address of the node where the loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head, *f = head ? head->next : NULL;

	while (s && f && f->next && s != f)
	s = s->next, f = f->next->next;
	if (s != f)
		return (NULL);
	for (s = head; s != f; s = s->next, f = f->next)
	;
	return (s);
}
