#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * check_cycle - function that check if a list has a cycle
 * @list: the list to check
 * Return: 1 if there is a cycle or 0
 */


int check_cycle(listint_t *list)
{
	listint_t *fast = list->next;
	listint_t *slow = list;
	if (list == NULL)
		return (0);

	while (fast && slow && fast->next)
	{
		if (fast == slow)
			return (1);
		fast = fast->next->next;
		slow = slow->next;
	}
	return (0);
}
