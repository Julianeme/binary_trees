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
