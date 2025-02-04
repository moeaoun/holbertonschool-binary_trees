#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: A pointer to the node to find the sibling for.
 *
 * Return: A pointer to the sibling node, or NULL if no sibling or if
 *         the node or its parent is NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return (NULL);

    /* Check if the node is the left child */
    if (node->parent->left == node)
        return (node->parent->right);

    /* Otherwise, the node must be the right child */
    return (node->parent->left);
}

