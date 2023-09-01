#include "binary_trees.h"

/**
 * binary_tree_sibling - This finds the sibling of a node.
 * @node: Node to check.
 * Return: The sibling node, or NULL if none.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return (NULL);

    return (node->parent->left == node) ? node->parent->right : node->parent->left;
}

