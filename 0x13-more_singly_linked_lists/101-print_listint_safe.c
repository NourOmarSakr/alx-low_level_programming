#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *loop;

	if (head == NULL)
		exit(98);

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		if (head > head->next) /* loop found */
		{
			loop = head->next;
			printf("-> [%p] %d\n", (void *)loop, loop->n);
			break;
		}
		head = head->next;
	}

	return (count);
}
