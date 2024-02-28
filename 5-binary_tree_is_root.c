#include "binary_trees.h"

/**
* binary_tree_is_root - Checks if a given node is a root.
* @node: Pointer to the node to check.
*
* Return: 1 if the node is a root, otherwise 0.
* If the node is NULL, return 0.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	/* If the node is NULL or has a parent, it's not a root */
	if (node == NULL || node->parent != NULL)
	{
	return (0);
	}

	/* If the node has no parent, it's a root */
	return (1);
}
