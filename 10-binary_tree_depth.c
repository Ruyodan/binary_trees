#include "binary_trees.h"

/**
* binary_tree_depth - Measures the depth of a node in a binary tree.
* @tree: Pointer to the node to measure the depth.
*
* Return: The depth of the node. If the tree is NULL, returns 0.
*
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* If the tree is NULL, the depth is 0 */
	if (tree == NULL)
	{
	return (0);
	}

	/* Calculate the depth of the parent node */
	size_t depth = 0;

	if (tree->parent)
	{
	depth = 1 + binary_tree_depth(tree->parent);
	}

	return (depth);
}
