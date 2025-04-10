#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 *binary_tree_leaves- function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/*is it a real node? */
	if (tree == NULL)
	{
		return (0);
	}

	/*this is a leaf node*/
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));

}
