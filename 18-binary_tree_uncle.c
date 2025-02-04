#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: A pointer to the node to find the uncle for.
 *
 * Return: A pointer to the uncle node, or NULL if no uncle or if
 *         the node or its parent is NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return (NULL);

    /* Get the grandparent node */
    binary_tree_t *grandparent = node->parent->parent;

    /* If the parent is the left child of the grandparent, the uncle is the right child */
    if (grandparent->left == node->parent)
        return (grandparent->right);

    /* Otherwise, the parent is the right child, so the uncle is the left child */
    return (grandparent->left);
}

