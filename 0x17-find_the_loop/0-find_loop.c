#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: list
 * Return: The address of the node
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *fast;
listint_t *slow;

if (!head || !head->next)
return (0);
fast = head;
slow = head;
while (fast &&  fast->next)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
}
return (0);
}
