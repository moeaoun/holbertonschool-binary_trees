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

	/* If the parent is the left child, the uncle is the right child */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	/* If the parent is the right child, the uncle is the left child */
	return (node->parent->parent->left);
}

