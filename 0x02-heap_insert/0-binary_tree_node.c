#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create.
 * @value: the value to put in the new node.
 *
 * Return: NULL or the new node.
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	newnode = malloc(sizeof(heap_t));

	if (!newnode)
		return (NULL);
	if (parent == NULL)
	{
		newnode->parent = NULL;
		newnode->right = NULL;
		newnode->left = NULL;
		newnode->n = value;
		return (newnode);
	}
	else
	{
		newnode->parent = parent;
		newnode->right = NULL;
		newnode->left = NULL;
		newnode->n = value;
		return (newnode);
	}
}
