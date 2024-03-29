#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks
 * if a binary tree is full
 * A binary tree is considered full if
 * every node has either two children or no children.
 *
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: 1 if the binary tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0, right_full = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL)
		left_full = binary_tree_is_full(tree->left);

	if (tree->right != NULL)
		right_full = binary_tree_is_full(tree->right);

	if (left_full == 1 && right_full == 1)
		return (1);
	else
		return (0);
}
