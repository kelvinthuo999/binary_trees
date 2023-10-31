#include "binary_trees.h"

/**
 * binary_tree_postorder - Post-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 *
 * Description: This function applies func to each node in post-order.
 * The value in each node is passed as a parameter to the function.
 * If tree or func is NULL, do nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);	/* Recurse on the left subtree */
	binary_tree_postorder(tree->right, func);	/* Recurse on the right subtree */
	func(tree->n);				/* Apply the function to the current node */
}
