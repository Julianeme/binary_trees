#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: The height of the tree or 0 If tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
