#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of a binary tree for a balanced tree
 *
 * @tree: Tree to measure
 * Return: Height of the tree
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t l = binary_tree_height_b(tree->left);
	size_t r = binary_tree_height_b(tree->right);

	return (1 + (l > r ? l : r));
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 *
 * @tree: The Tree to measure
 * Return: The Balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int left = binary_tree_height_b(tree->left);
	int right = binary_tree_height_b(tree->right);

	return (left - right);
}

