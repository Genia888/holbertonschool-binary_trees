#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - binary tree orderded
 * @tree : tree
 * @func : func to print
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left != NULL)
			binary_tree_postorder(tree->left, func);
		if (tree->right != NULL)
			binary_tree_postorder(tree->right, func);
		if (func != NULL)
			func(tree->n);
	}

}
