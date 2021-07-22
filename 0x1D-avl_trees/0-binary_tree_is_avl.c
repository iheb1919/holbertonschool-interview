#include "binary_trees.h"

/**
 * avl_node_height - enter
 * @tree: tree
 * Return: 1 or 0
 */
int avl_node_height( binary_tree_t *tree ) {
	int height_left = 0;
	int height_right = 0;

	if( tree->left ) height_left = avl_node_height( tree->left );
	if( tree->right ) height_right = avl_node_height( tree->right );

	return height_right > height_left ? ++height_right : ++height_left;
}

/**
 * binary_tree_is_avl - enter
 * @tree: tree
 * Return: 1 or 0
 */
int binary_tree_is_avl(const binary_tree_t *tree) {
	int balance = 0;
	if( tree->left  ) balance += avl_node_height( tree->left );
	if( tree->right ) balance -= avl_node_height( tree->right );
    if (balance <= 1)
    return 1;
	return (0);
}



