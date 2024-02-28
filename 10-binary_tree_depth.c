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

	/* Calculate the depth of the parent node */
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
