#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l;
	int r;

	if (tree == NULL)
	{
		return (0);
	}
	
	l = binary_tree_is_perfect(tree->left);
       	r = binary_tree_is_perfect(tree->right);

	if (l == 0 && r == 0)
	{
		return (1);
	}	

	if (l == r)
	{
		if (tree->parent == NULL)
		{
			return (1);
		}
		else
		{
			return (l + 1);
		}

	}
	else
	{
		return (0);
	}
}
