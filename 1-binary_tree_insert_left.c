#include "binary_trees.h"

/**
 * binary_tree_insert_left - This adds a node as the
 * left child of parent node
 *
 * @parent: The pointer to the parent node
 * @value: The value to set for the new node
 * Return: The pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	binary_tree_t *new_b_node = binary_tree_node(parent, value);

	if (!new_b_node)
		return (NULL);

	if (parent->left)
	{
		new_b_node->left = parent->left;
		parent->left->parent = new_b_node;
	}

	parent->left = new_b_node;
	return (new_b_node);
}
