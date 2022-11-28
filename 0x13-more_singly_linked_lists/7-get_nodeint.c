#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 * a listint_t list
 * @head: A pointer to the head of listint_t list
 * @index: The index of a node to locate - indices at a 0
 *
 * Return: If the node does not exist - NULL
 * Otherwise - thelocated node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
