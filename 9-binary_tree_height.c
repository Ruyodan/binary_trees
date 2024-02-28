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
	/* If the tree is NULL, the height is 0 */
	if (tree == NULL)
	{
	return (0);
	}

	/* Calculate the height of the left subtree */
	size_t left_height = tree->left ? binary_tree_height(tree->left) + 1 : 0;

	/* Calculate the height of the right subtree */
	size_t right_height = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	/* Return the maximum height of the two subtrees */
	return (left_height > right_height ? left_height : right_height);
}
