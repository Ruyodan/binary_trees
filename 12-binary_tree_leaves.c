#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 *
 * Return: The number of leaves in the binary tree, or 0 if the tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
	/* Check if the current node is a leaf */
	if (!tree->left && !tree->right)
	{
		leaves += 1;
	}
	/* Recursively count the leaves in the left and right subtrees */
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
