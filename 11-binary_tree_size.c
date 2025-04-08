#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_size - height
 * @tree : tree
 *
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t hleft = 0;
	size_t hright = 0;
	size_t zero = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
			hleft = binary_tree_size(tree->left);
		if (tree->right != NULL)
			hright = binary_tree_size(tree->right);
		return (1 + hleft + hright);
	}
	return (zero);

}
