#include "binary_trees.h"

/**
 * binary_tree_postorder - Prints elements of tree using post-order
 *
 * @tree: Tree to traverse
 * @func: Function to use for printing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

