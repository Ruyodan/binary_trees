#include "binary_trees.h"

/**
 * binary_tree_is_full - function that
 * says if a tree is full
 * a tree is full if it has tow or none children
 * @tree: tree to check
 * Return: 1 if it is a full 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int i = 0, j = 0, s = 1;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
            j = binary_tree_is_full(tree->right);
			i = binary_tree_is_full(tree->left);
			if (i == 0 || j == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->right && !tree->left)
		{
			return (s);
		}
		else
		{
			return (0);
		}
	}
}
