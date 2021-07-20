#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

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
