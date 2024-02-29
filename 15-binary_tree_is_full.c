#include "binary_trees.h"
/**
 * binary_tree_is_full - function name
 * @tree: tree to check
 *
 * Return: returns weather its full or not
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right != NULL)
		return (0);

	if (tree->right == NULL && tree->left != NULL)
		return (0);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}