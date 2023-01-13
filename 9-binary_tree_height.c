#include "binary_trees.h"
size_t findMax(size_t right, size_t left);
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node
 * Return: height amount
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0, right = 0, left = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right = binary_tree_height(tree->right) + 1;

	height = findMax(right, left);

	return (height);
}
/**
 * findMax - find heighest hight to return
 * @right: right subtree
 * @left: left subtree
 * Return: tallest height
 */
size_t findMax(size_t right, size_t left)
{
	if (right > left)
		return (right);
	else
		return (left);
}
