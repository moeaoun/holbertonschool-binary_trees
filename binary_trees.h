#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/* Include necessary libraries */
#include <stddef.h>  /* for NULL */

/* Binary Tree node structure */
typedef struct binary_tree_s {
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Function prototypes */
void binary_tree_print(const binary_tree_t *tree); /* For visualization */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_insert_left(binary_tree_t *parent, binary_tree_t *new_node);
void binary_tree_insert_right(binary_tree_t *parent, binary_tree_t *new_node);

#endif /* BINARY_TREES_H */

