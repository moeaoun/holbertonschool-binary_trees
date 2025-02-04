#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the created node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    /* Check if parent is NULL */
    if (parent == NULL)
        return (NULL);

    /* Create a new node */
    new_node = binary_tree_node(parent, value);
    if (new_node == NULL) /* Check if node creation failed */
        return (NULL);

    /* If the parent already has a left child, move it to the left of the new node */
    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }

    /* Insert the new node as the left child of the parent */
    parent->left = new_node;

    return (new_node);
}

