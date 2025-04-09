#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder -  a function that goes through a binary tree
 * using post-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func:  a pointer to a function to call for each node
 *
 * Return: 1 if node is a root, otherwise 0
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
/* Recursively traverse left subtree.*/
	binary_tree_postorder(tree->left, func);
/* Recursively traverse right subtree.*/
	binary_tree_postorder(tree->right, func);
/* Visit root node.*/
	func(tree->n);

}
