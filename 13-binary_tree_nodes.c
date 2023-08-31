#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes in a binary tree with children
 *
 * @tree: Tree to count nodes
 * Return: Number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t nodes = 0;

	if (tree->left || tree->right)
		nodes = 1;

	nodes += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (nodes);
}

