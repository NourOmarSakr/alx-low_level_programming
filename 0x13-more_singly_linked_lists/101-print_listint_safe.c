#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast, *loop;

	if (head == NULL)
		exit(98);

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			loop = find_loop(head, slow);
			count += print_loop(head, loop);
			count += print_no_loop(loop);
			return (count);
		}
	}

	count += print_no_loop(head);
	return (count);
}

/**
 * find_loop - finds the starting node of a loop in a linked list
 * @head: pointer to the first node of the list
 * @meet: pointer to the meeting node of slow and fast pointers
 * Return: pointer to the starting node of the loop
 */
const listint_t *find_loop(const listint_t *head, const listint_t *meet)
{
	const listint_t *start;

	start = head;
	while (start != meet)
	{
		start = start->next;
		meet = meet->next;
	}

	return (start);
}

/**
 * print_loop - prints the nodes in a looped linked list until loop node
 * @head: pointer to the first node of the list
 * @loop: pointer to the loop node
 * Return: number of nodes printed
 */
size_t print_loop(const listint_t *head, const listint_t *loop)
{
	size_t count = 0;

	while (head != loop)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	return (count);
}

/**
 * print_no_loop - prints the nodes in a non-looped linked list
 * @head: pointer to the first node of the list
 * Return: number of nodes printed
 */
size_t print_no_loop(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	return (count);
}
