#include "binary_trees.h"

/**
 * binary_tree_size - Calculates size of a binary tree
 *
 * @tree: Tree to calculate size for
 * Return: Size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

