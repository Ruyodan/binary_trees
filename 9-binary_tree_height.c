#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree.
* @tree: Pointer to the root node of the tree to measure the height.
*
* Return: The height of the binary tree. If the tree is NULL, returns 0.
*
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
	size_t l = 0, r = 0;

	/* Calculate the height of the left subtree */
	l = tree->left ? 1 + binary_tree_height(tree->left) : 0;

	/* Calculate the height of the right subtree */
	r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	/* Return the maximum height of the two subtrees */
	return ((l > r) ? l : r);

	}
	return (0);
}
