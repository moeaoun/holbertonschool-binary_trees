#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: The depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    while (tree && tree->parent)
    {
        depth++;
        tree = tree->parent;
    }

    return (depth);
}

/**
 * is_perfect_helper - Helper function that checks if a tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * @depth: Depth of the tree
 * @level: Current level of the node being checked
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int is_perfect_helper(const binary_tree_t *tree, size_t depth, size_t level)
{
    if (tree == NULL)
        return (1);

    /* If it's a leaf node, check if it's at the right depth */
    if (tree->left == NULL && tree->right == NULL)
        return (level == depth);

    /* If it has one child, it's not perfect */
    if (tree->left == NULL || tree->right == NULL)
        return (0);

    /* Recur for both children */
    return (is_perfect_helper(tree->left, depth, level + 1) &&
            is_perfect_helper(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t depth;

    if (tree == NULL)
        return (0);

    /* Find the depth of the tree */
    depth = binary_tree_depth(tree);

    /* Check if the tree is perfect */
    return (is_perfect_helper(tree, depth, 0));
}

