#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_balance- function that measures the balance factor.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 * Return: 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t  leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);
	return (leftHeight - rightHeight);
}


/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if (tree == NULL)
		return (0);

	left_size += 1 + binary_tree_height(tree->left);
	right_size += 1 + binary_tree_height(tree->right);
	if (left_size > right_size)
		return (left_size);

	return (right_size);
}
