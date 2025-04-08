#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - leaves
 * @tree : tree
 *
 * Return: size
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t hleft = 0;
	size_t hright = 0;
	size_t zero = 0;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		else
			return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
	return (zero);

}
