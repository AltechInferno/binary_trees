#include "binary_trees.h"

/**
 * binary_tree_node - This creates a binary node
 * @parent: this is a node parent
 * @value: the value of the node
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_b_node;

	new_b_node = malloc(sizeof(binary_tree_t));
	if (new_b_node == NULL)
	{
		return (NULL);
	}

	
	new_b_node->n = value;
	new_b_node->left = NULL;
	new_b_node->right = NULL;
	new_b_node->parent = parent;
	return (new_b_node);
}

