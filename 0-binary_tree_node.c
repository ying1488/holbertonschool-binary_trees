#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 *binary_tree_node - creates a binary tree node
 *@parent: pointer to parent
 *@value: value to put in the new node
 *Return: the node
 */ 

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*Mem alloc*/
	binary_tree_t *newNodes = malloc(sizeof(binary_tree_t));

	/*if allocation works ?*/
	if (newNodes == NULL)
		return(NULL);

	/**Setup node structure*/
	newNodes->n = value;
	newNodes->parent = parent;
	newNodes->left = NULL;
	newNodes->right = NULL;

	return (newNodes);

}
