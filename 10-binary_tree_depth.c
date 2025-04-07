#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - height
 * @tree : tree
 *
 * Return: height
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *ptr;
	size_t length = 0;

	ptr = tree;
	if (tree == NULL)
		return (length);
	while (ptr->parent != NULL)
	{
		length = length + 1;
		ptr = ptr->parent;
	}
	return (length);
}
