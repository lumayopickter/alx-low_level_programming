#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the pointer of the head node.
 *
 * Return: The data stored in the head node, or -1 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL) /* Check if the list is empty */
		return (-1);

	data = (*head)->n; /* Store the data of the head node */

	temp = *head; /* Create a temporary variable */

	*head = (*head)->next; /* Update head to point to the next node */

	free(temp); /* Free the memory of the original head node */

	return (data); /* Return the data of the original head node */
}

