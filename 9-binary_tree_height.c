#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftSide, rightSide;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	else
	{
	/*Get the maximum height of the left subtree recursively*/
	leftSide = binary_tree_height(tree->left);
	/*Get the maximum height of the right subtree recursively.*/
	rightSide = binary_tree_height(tree->right);
	/**
	 * Get the max of maximum heights of left and right subtrees.
	 * Add 1 to it for the current node.
	 * Return maximum_height.
	 */

	if (leftSide > rightSide)
		return (leftSide + 1);
	else
		return (rightSide + 1);
	}
}
