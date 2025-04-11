#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_is_perfect- function that 
 * checks if a binary tree is perfect
 * @tree:  pointer to the root node of the tree to measure the balance factor
 *
 * Return: 0.
 */




 get height 
 get size 


 size_t total_nodes = (1UL << (height + 1 )) - 1);
	if totel_nodes == size
	return ;
return 0 ; 

/**int binary_tree_is_perfect (const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	
	/*If the root is a leaf node, then the tree is a perfect binary tree.*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/*If the root has only one child, then the tree is not a perfect binary tree*/
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	/*Recursively check the left and right subtrees.*/
	/*If both are perfect binary trees, then the entire tree is a perfect binary tree.*/
/**	return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));

}
*/

