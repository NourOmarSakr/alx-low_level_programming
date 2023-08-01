#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp;
	unsigned long int hash[1024];
	int i;

	if (h == NULL || *h == NULL)
		return (0);

	for (i = 0; i < 1024; i++)
		hash[i] = 0;

	while (*h)
	{
		tmp = (*h)->next;
		free(*h);
		count++;
		if (hash[(unsigned long int)*h % 1024] == (unsigned long int)*h)
			break;
		hash[(unsigned long int)*h % 1024] = (unsigned long int)*h;
		*h = tmp;
	}

	*h = NULL;

	return (count);
}
