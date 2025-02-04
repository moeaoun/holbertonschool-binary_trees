#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent node.
 * @value: The value to put in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL) /* Check if allocation fails */
        return (NULL);

    /* Initialize node values */
    new_node->n = value;
    new_node->parent = parent;  /* Set the parent pointer */
    new_node->left = NULL;      /* No left child initially */
    new_node->right = NULL;     /* No right child initially */

    /* Return the new node */
    return (new_node);
}

