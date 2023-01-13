#include "binary_trees.h"
size_t findMax(size_t right, size_t left);
size_t tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - measures the balance factor of binary tree
 * @tree: pointer to node measured
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int heightL = 0, heightR = 0;
	int balance = 0;

	if (tree == NULL)
		return (0);

	heightL = tree_height(tree->left);
	heightR = tree_height(tree->right);

	balance = (heightL - heightR);
	return (balance);

}
/**
 * tree_height - find subtree height
 * @tree: node
 * Return: height
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t height = 0, right = 0, left = 0;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left) + 1;
	right = tree_height(tree->right) + 1;

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
