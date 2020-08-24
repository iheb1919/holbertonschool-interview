#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * size - function return the size of the list
 * @head: the list
 * Return: the size
 */

int size(listint_t **head)
{
	listint_t *new = *head;
	int i = 0;

	while (new)
	{
		i++;
		new = new->next;
	}
	return (i);

}

/**
 * is_palindrome - function that verify if the list is palidrome or not
 * @head: the list
 * Return: 1 if palidrome 0 if not.
 */

int is_palindrome(listint_t **head)
{
	listint_t *new;
	int i = 0, s;
	int *array;

	if (!head)
		return (0);
	if (!(*head) || !(*head)->next)
		return (1);
	new = *head;
	s = size(head);
	array = malloc(sizeof(int) * s);
	while (new)
	{
		array[i] = new->n;
		i++;
		new = new->next;
	}
	for (i = 0; i < s / 2; i++)
	{
		if (array[i] != array[s - 1 - i])
			return (0);
	}
	return (1);
}
