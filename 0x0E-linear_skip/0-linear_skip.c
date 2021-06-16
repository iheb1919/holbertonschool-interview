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
while (listt && listt->next)
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
 * @list: list of type skiplis_t
 * @value: value to search into list
 * Return: NULL or node contain to value
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *head;

if (!list)
return (0);
while (list && list->next && list->n < value)
{
while (list && list->express)
{
head = list;
if (!list->express)
{
while (list->next)
list = list->next;
continue;
}
else
{
list = list->express;
}
printf("Value checked at index [%li] = [%i]\n", list->index, list->n);
}
}
return (search_skip(head, list, value));
}
