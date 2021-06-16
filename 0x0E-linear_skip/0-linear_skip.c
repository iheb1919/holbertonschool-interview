#include "search.h"
/**
 * search_skip - search for a value.
 * @listt:  list
 * @lit:  list
 * @value: value to search
 * Return: NULL if not found value or the node that contain value
 */
skiplist_t *search_skip(skiplist_t  *listt, skiplist_t  *lit, int value)
{

printf("Value found between indexes [%li] and [%li]\n",
listt->index, lit->index);
while (listt != lit->next)
{
printf("Value checked at index [%li] = [%i]\n", listt->index, listt->n);
if (listt->n == value)
{
return (listt);
}
listt = listt->next;
}
return (NULL);
}
/**
 * linear_skip - search for a number in a linear skip
 * @list: list
 * @value: value
 * Return: NULL or node contain to value
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *head, *aux;

if (!list)
return (NULL);
head = list;
while (head && head->next && head->n < value)
{
aux = head;
if (!head->express)
{
while (head->next)
head = head->next;
continue;
}
else
{
head = head->express;
}
printf("Value checked at index [%li] = [%i]\n", head->index, head->n);
}
return (search_skip(aux, head, value));
}
