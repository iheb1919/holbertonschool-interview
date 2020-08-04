#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - nserts a number into a sorted singly linked list.
 * @head: pointer to head of list.
 * @number: number to insert.
 * Return: NULL or the qdress of the new node.
 */

listint_t *insert_node(listint_t **head, int number)
{

	listint_t *new, *current = NULL;

	new = malloc(sizeof(listint_t));
	new->n = number;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	current = *head;
	if (current->n > new->n)
	{
		new->next = current;
		*head = new;
		return (*head);
	}
	else
	{
		while (current->next && current->next->n < new->n)
		{
			current = current->next;
		}
		new->next = current->next;
		current->next = new;
		return (new);
	}
}
