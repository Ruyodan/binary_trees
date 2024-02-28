#include "binary_trees.h"

/**
* binary_tree_is_leaf - Checks if a node is a leaf.
* @node: Pointer to the node to check.
*
* Return: 1 if the node is a leaf, otherwise 0.
* If the node is NULL, return 0.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* If the node is NULL or has either a left or right child, it's not a leaf */
	if (node == NULL || node->left != NULL || node->right != NULL)
	{
	return (0);
	}

	/* If the node has no children, it's a leaf */
	return (1);
}
