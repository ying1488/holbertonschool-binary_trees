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
	int leftHeight = 0, rightHeight = 0;
	int ll = 0, lr = 0;
	int rl = 0, rr = 0;
	const binary_tree_t *left;
	const binary_tree_t *right;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		left = tree->left;
		if (left->left)
			ll = 1 + binary_tree_balance(left->left);
		if (left->right)
			lr = 1 + binary_tree_balance(left->right);
		leftHeight = (ll > lr ? ll : lr) + 1;
	}

	if (tree->right)
	{
		right = tree->right;
		if (right->left)
			rl = 1 + binary_tree_balance(right->left);
		if (right->right)
			rr = 1 + binary_tree_balance(right->right);
		rightHeight = (rl > rr ? rl : rr) + 1;
	}
	return (leftHeight - rightHeight);
}
