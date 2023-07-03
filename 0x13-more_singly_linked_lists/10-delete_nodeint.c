#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes node at a given position in linked list.
 * @head: A pointer to the pointer to the head node.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if the deletion was successful, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	i = 0;

	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}

