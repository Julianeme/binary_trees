#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the tree node
 * Return: The number of nodes with at least 1 child of 0 if tree is empty
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL &&
		tree->right == NULL))
		return (0);
	return (1 + binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));
}
