#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = *h;
	listint_t *temp;

	while (current != NULL)
	{
		size++;
		temp = current;
		current = current->next;

		/* Set the next pointer of the current node to NULL */
		temp->next = NULL;

		/* Free the current node */
		free(temp);

		/* If we encounter a loop, break to avoid infinite loop */
		if (temp < current)
		{
			*h = NULL;
			break;
		}
	}

    /* Set the head pointer to NULL */
	*h = NULL;

	return (size);
}
