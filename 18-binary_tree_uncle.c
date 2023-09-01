#include "binary_trees.h"

/**
 * binary_tree_uncle - This finds the uncle of a node.
 * @node: Node to check.
 * Return: The uncle node, or NULL if none.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return (NULL);

    binary_tree_t *grandparent = node->parent->parent;
    return (grandparent->left == node->parent) ? grandparent->right : grandparent->left;
}

