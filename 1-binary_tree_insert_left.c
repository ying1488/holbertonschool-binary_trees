#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - adds a node to the left
 * @parent: the parent node
 * @value: the value to insert
 * Return: the node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *b;

	if (parent == NULL)
		exit(98);

	b = malloc(sizeof(binary_tree_t));
	if (b == NULL)
		return (NULL);
	b->n = value;
	/*Consider if position is occupied or not*/
	if (parent->left != NULL)/*ocupied*/
	{
		b->parent = parent;
		/*Makes the old left child the new node's left child.*/
		b->left = parent->left;
		b->right = NULL;
		/*Updates the old left child's parent pointer to point to the new node b*/
		parent->left->parent = b;
	}
	else /*unoccupied*/
	{
		b->parent = parent;
		b->left = NULL;
		b->right = NULL;
	}

	parent->left = b;

	return (b);
}
