#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added to the new node
 * Return: pointer to the new node, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	len = 0;
	while (str[len])
		len++;

	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
	printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;

		free(head->str);
		free(head);

		head = temp;
	}
}
