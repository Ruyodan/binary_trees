#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Return: The size of the binary tree. If the tree is NULL, returns 0.
 *
 * Description: This function measures the size of a binary tree, which is the
 * total number of nodes in the tree. The size is calculated by recursively
 * counting the nodes in the left and right subtrees and adding 1 for the root.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* If the tree is NULL, the size is 0 */
	if (tree == NULL)
	{
		return (0);
	}

	/* Recursively count the size of the left and right subtrees */
	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);

	/* Size of the tree is the sum of the sizes of the left and right subtrees */
	return (left_size + right_size + 1);
}
