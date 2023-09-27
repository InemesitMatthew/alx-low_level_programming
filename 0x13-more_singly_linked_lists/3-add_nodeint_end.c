#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp = *head; /* Create a temporary pointer to traverse the list */

	newNode = malloc(sizeof(listint_t)); /* Allocate memory for the new node */
	if (newNode == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails */
	}

	newNode->n = n; /* Set the data of the new node */
	newNode->next = NULL; /*Initialize the next pointer of the new node to NULL */

	if (*head == NULL)
	{
		*head = newNode; /* If the list is empty, make the new node the head */
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next; /* Traverse to the last node */
		}
		temp->next = newNode;
		/* Update the last node's next pointer to point to the new node */
	}

	return (newNode); /* Return the address of the new element */
}
