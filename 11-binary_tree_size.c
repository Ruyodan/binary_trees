#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Return: The size of the binary tree. If the tree is NULL, returns 0.
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{

	/* Recursively count the size of the left and right subtrees */
	size += 1;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	}
	/* Size of the tree is the sum of the sizes of the left and right subtrees */
	return (size);
}
