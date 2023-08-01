#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to pointer to the first node of the list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next, *loop;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	loop = find_loop(*h);

	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;
		if (current == loop)
			break;
		current = next;
	}

	*h = NULL;

	return (count);
}

/**
 * find_loop - finds the starting node of a loop in a linked list
 * @head: pointer to the first node of the list
 * Return: pointer to the starting node of the loop, or NULL if no loop
 */
listint_t *find_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (find_start(head, slow));
	}

	return (NULL);
}

/**
 * find_start - finds the starting node of a loop in a linked list
 * @head: pointer to the first node of the list
 * @meet: pointer to the meeting node of slow and fast pointers
 * Return: pointer to the starting node of the loop
 */
listint_t *find_start(listint_t *head, listint_t *meet)
{
	listint_t *start;

	start = head;
	while (start != meet)
	{
		start = start->next;
		meet = meet->next;
	}

	return (start);
}
