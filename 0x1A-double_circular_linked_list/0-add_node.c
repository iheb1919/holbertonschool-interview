#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

/**
 * add_node_end - add node to the end
 * @list: list
 * @str: node to add
 * Return: list or NULL
 */

List *add_node_end(List **list, char *str)
{
List *newnode = NULL;

	newnode = malloc(sizeof(List));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	if (!newnode->str)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = NULL;
	newnode->prev = NULL;

if (!(*list))
{
newnode->next = newnode;
newnode->prev = newnode;
*list = newnode;
}
	else
	{
		newnode->next = (*list);
		newnode->prev = (*list)->prev;
		(*list)->prev->next = newnode;
		(*list)->prev = newnode;
	}
	return (newnode);
}

/**
 * add_node_begin - add node at the begin of the list
 * @list: list
 * @str: node to add
 * Return: list or NULL
 */

List *add_node_begin(List **list, char *str)
{
List *newnode = NULL;

	newnode = malloc(sizeof(List));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	if (!newnode->str)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = NULL;
	newnode->prev = NULL;

if (!(*list))
{
newnode->next = newnode;
newnode->prev = newnode;
*list = newnode;
}
	else
	{
		newnode->next = (*list);
		newnode->prev = (*list)->prev;
		(*list)->prev->next = newnode;
		(*list)->prev = newnode;
*list = newnode;
	}
	return (newnode);
}
