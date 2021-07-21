#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: a pointer to the sibling node or NULL otherwise
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node)
		if (node->parent)
			if (node->parent->left && node->parent->right)
			{
				if (node == node->parent->left)
					return (node->parent->right);
				return (node->parent->left);
			}
	return (NULL);
}
