#include "binary_trees.h"

/**
 * binary_tree_insert_left - this inserts a node on the left
 * of the parent node.
 * @parent: Parent node.
 * @value: Value of the new node.
 * Return: Pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_b_node = binary_tree_node(parent, value);

	if (new_b_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_b_node->left = parent->left;
		parent->left->parent = new_b_node;
	}
	parent->left = new_b_node;
	return (new_b_node);
}

