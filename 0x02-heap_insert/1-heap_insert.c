#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: parent node
 * @value: integer to value
 * Return: pointer to node
 */

heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *newnode = NULL, *current, *current2;
	newnode = malloc(sizeof(heap_t));
	current = *root;
	newnode->parent = NULL;
	newnode->right = NULL;
	newnode->left = NULL;
	newnode->n = value;

	if (current == NULL)
	{
		return (newnode);
	}
	current2 = current;
	int j = 0;
		while(current)
		{
			if (current2)
			{
				current2 = current2->right;
				j++;
			}
			if (current->left == NULL)
			{
				newnode->parent = current;
				current->left = newnode;
				break;
			}
			if (current->right == NULL)
			{
				newnode->parent = current;
				current->right = newnode;
			        break;
			}

		}
	return (*root);
}
