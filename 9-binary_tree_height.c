#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_height - height 
 * @tree : tree
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hleft = 0;
	size_t hright = 0;
	if (tree != NULL)
	{
		if (tree->left != NULL)
			hleft = 1 + binary_tree_height(tree->left);
		if (tree->right != NULL)
			hright = 1 + binary_tree_height(tree->right);
		return hleft>hright ? hleft : hright;	
	}
	return hleft;

}
