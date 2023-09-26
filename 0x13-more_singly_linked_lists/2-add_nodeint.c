#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	/**
	* Allocate memory for the new node
	*/
	if (newNode == NULL)
	{
		return (NULL); /*Return NULL if memory allocation fails*/
	}

	newNode->n = n; /*Set the data of the new node*/
	newNode->next = *head; /*Set the next pointer to the current head*/
	*head = newNode; /*Update the head to point to the new node*/

	return (newNode); /*Return the address of the new element*/
}
