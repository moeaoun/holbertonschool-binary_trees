#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    // Step 1: Check if parent is NULL
    if (!parent)
        return (NULL);

    // Step 2: Create the new node
    new_node = binary_tree_node(parent, value);
    if (!new_node)  // Check if node creation fails
        return (NULL);

    // Step 3: If parent already has a left child, move the old left child
    if (parent->left)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;  // Update the parent of the old left child
    }

    // Step 4: Set the new node as the left child of the parent
    parent->left = new_node;

    return (new_node);
}

