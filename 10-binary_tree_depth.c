#include "binary_trees.h"

/**
 * binary_tree_depth - This calculates the depth of
 * a node from the root
 *
 * @tree: Node to check the depth
 * Return: the depth of node if not root, 0 if it's root
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (tree && tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}

