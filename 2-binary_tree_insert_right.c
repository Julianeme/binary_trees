#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as
 * the right-child of another node  * wheter it already has
 * a child node or not.
 * @parent:  a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure or
 * if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = binary_tree_node(parent, value);
	if (!parent || !new)
		return (NULL);

	if (parent->right)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	new->parent = parent;
	parent->right = new;

	return (new);
}
