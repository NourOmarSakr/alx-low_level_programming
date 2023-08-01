#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the first node of the list
 * Return: The address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
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
