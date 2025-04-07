#include <stddef.h>
#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_node - fonction that creates a binary tree node
 * @parent: parent node
 * @value: nomber
 * Return: new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		perror("Erreur d'allocation de mémoire.");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
