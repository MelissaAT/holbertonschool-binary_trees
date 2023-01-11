#include "binary_trees.h"
/**
 * binary_tree_preorder - function that goes thorugh a
 * binary tree using pre-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a cunction to call for each node.
 * the value in the node must be passed as a parameter to this function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
