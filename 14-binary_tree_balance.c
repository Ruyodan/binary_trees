#include "binary_trees.h"

/**
 * binary_tree_height - Function
 * that measures the height
 * of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: if tree is NULL return 0 othewise return the height of tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, max, left;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);

	if (left > right)
		max = left;
	else
		max = right;

	return (1 + max);
}

/**
 * binary_tree_balance - Function that
 * measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 * to measure the balance factor
 *
 * Return: if tree is NULL return 0 othewise
 * return the height of tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
