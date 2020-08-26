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
	listint_t *new, *mid;
	int i = 0, s;

	printf("dddddddddddddddd");
	if (!head)
		return (0);
	if (!(*head) || (*head)->next == NULL)
		return (1);
	new = *head;
	s = size(head);

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
	 /**
		*for (i = 0; i < s / 2; i++)
	*{
	*	(*head) = (*head)->next;
	*}
	*mid = *head;
	*printf("qqqqqq%d",mid->n);
	*for (i = 0; i < s / 2; i++)
	*{
	*	if (new->n != mid->n)
	*		return (0);
	*}
	*/
	return (1);
}
