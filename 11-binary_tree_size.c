#include "binary_trees.h"

/**
*binary_tree_leaves - Counts the leaves in a binary tree.
*@tree: Pointer to the root node of the tree to count the number of leaves.
*
*Description: This function counts the leaves in a binary tree.
*A leaf is a node with no children, both l and r child pointers are NULL.
*
*Return: The number of leaves in the binary tree. Retrun 0 if tree NULL.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* If the tree is NULL, there are no leaves */
	if (tree == NULL)
	{
	return (0);
	}

	/* Recursively count the leaves in the left and right subtrees */
	size_t left_leaves = binary_tree_leaves(tree->left);
	size_t right_leaves = binary_tree_leaves(tree->right);

	/* If the node is a leaf (no children), return 1 */
	if (tree->left == NULL && tree->right == NULL)
	{
	return (1);
	}

	/* Return the total number of leaves in the tree */
	return (left_leaves + right_leaves);
}
