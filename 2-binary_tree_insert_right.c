#include "binary_trees.h"
/**
 * binary_tree_insert_right - adds node in the right of the parent
 * if exists move down one level and add new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_b_node;

	if (parent == NULL)
		return (NULL);

	new_b_node = binary_tree_node(parent, value);

	if (new_b_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_b_node->right = parent->right;
		parent->right->parent = new_b_node;
	}
	parent->right = new_b_node;
	return (new_b_node);
}
