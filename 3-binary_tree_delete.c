#include <stddef.h>
#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: pointer to the root node of the tree do delete
 * Return: if rtee is NULL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);

	free(tree);
}
