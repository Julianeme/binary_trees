#include "binary_trees.h"

/**
 * max_val - function that return the biggest of two values
 * @val_1: first value
 * @val_2: Second value
 * Return: the biggest of two values
 */

size_t max_val(size_t val_1, size_t val_2)
{
	if (val_1 >= val_2)
		return (val_1);
	return (val_2);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: The height of the tree or 0 If tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);
	return (max_val(binary_tree_height(tree->left),
		binary_tree_height(tree->right)) + 1);
}
