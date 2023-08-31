#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf (has no children)
 *
 * @node:a Node to check
 * Return: 1 if it's a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && !node->left && !node->right);
}

