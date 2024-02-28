#include "binary_trees.h"

/**
* binary_tree_preorder - Performs a pre-order traversal on a binary tree.
* @tree: Pointer to the root node of the tree to traverse.
* @func: Pointer to a function to call for each node. The value in the node
*        must be passed as a parameter to this function.
*
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* If the tree or function pointer is NULL, do nothing */
	if (tree == NULL || func == NULL)
	{
	return;
	}

	/* Call the function on the value of the current node */
	func(tree->n);

	/* Recursively traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Recursively traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
