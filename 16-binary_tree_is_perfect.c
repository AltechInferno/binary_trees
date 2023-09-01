#include "binary_trees.h"


/**
 * binary_tree_is_perfect - is th is a perfect or not a tree
 * @tree: tree to check
 * Return: 1 is it is or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int binary_result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		binary_result = binary_tree_is_perfect(tree);
		if (binary_result != 0)
		{
			return (1);
		}
		return (0);
	}
}


/**
 * tree_is_perfect - func that says if a tree is perfect or not
 * it has to be the same quantity of levels in left and right
 * each node has to have 2 nodes or none
 * @tree: tree to check
 * Return: 0 if it is not a perfect or other number ie is the level of height
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int left_b = 0, right_b = 0;

	if (tree->left && tree->right)
	{
		right_b = 1 + binary_tree_is_perfect(tree->right);
		left_b = 1 + binary_tree_is_perfect(tree->left);
		if (right_b == left_b && right_b != 0 && left_b != 0)
			return (right_b);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
