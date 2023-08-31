#include "binary_trees.h"

/**
 * binary_tree_inorder - prints elements of tree using in-order
 *
 * @tree: Tree to traverse
 * @func: Function to use for printing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

