#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: The height of the tree or 0 If tree is NULL
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
    {
        size_t l = 0, c = 0;

        l = tree->left ? 1 + binary_tree_height(tree->left): 0;
        c = tree->right ? 1 + binary_tree_height(tree->right): 0;

        return ((l > c) ? l: c);
    }
	return (0);
}
