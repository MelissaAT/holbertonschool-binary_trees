#include "binary_trees.h"
size_t higher(size_t right_height, size_t left_height);
/**
 * binary_tree_height - function that ,easures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: if tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, high;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;

	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;

	high = higher(right_height, left_height);
		return (high);
}

/**
 * higher - find the highest subtree
 * @rigth_height: right subtree
 * @left_height: left subtree
 * Return: the highest subtree
 */
size_t higher(size_t right_height, size_t left_height)
{
	if (right_height > left_height)
	{
		return (right_height);
	}
	else
		return (left_height);
}
