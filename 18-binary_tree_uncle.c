#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: a pointer to the sibling node or NULL otherwise
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node && node->parent->parent->left && node->parent->parent->right)
	{
		if (node->parent == node->parent->parent->left)
			return (node->parent->parent->right);
		return (node->parent->parent->left);
	}
	return (NULL);
}
