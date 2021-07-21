#include "binary_trees.h"

/**
 * findADepth - recursive function that checks the depth of a tree
 * @tree: a pointer to the tree tree
 * Return: depth of the tree
 */

int findADepth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * isPerfectRec - recursive function to check if a tree is perfect
 * @tree: a pointer to the tree tree
 * @d: Depth of the tree
 * @level: a level counter used to compare if we are at the
 * deepest point of the tree
 * Return: 1 if tree is perfect or 0 otherwise
 */

int isPerfectRec(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (0);

	/*Cheking if all deeps are the same*/
	if (tree->left == NULL && tree->right == NULL)
	{
		if (d == level + 1)
			return (1);
		return (0);
	}

	/*Checking it node is internal and not perfect*/
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/*Checking if left and right are pefect*/
	return (isPerfectRec(tree->left, d, level + 1) &&
		isPerfectRec(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: a pointer to the tree tree
 * Return: 1 if tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int level = 0;
	int d = findADepth(tree);

	return (isPerfectRec(tree, d, level));
}
