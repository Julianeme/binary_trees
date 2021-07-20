#include "binary_trees.h"
"""
creates a binary tree node
"""


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    new_node = malloc(sizeof(binary_tree_t));
    new_node->n = value;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->parent = parent;

    return (new_node);
}
