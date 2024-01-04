#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
void printer(const binary_tree_t *tree, void (*func)(int), size_t level);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_height - inapima height ya tree
 * @tree: root nde to the tree pointer
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rs, ls;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	ls = binary_tree_height(tree->left);
	rs = binary_tree_height(tree->right);
	if (ls < rs)
		return (rs + 1);
	return (ls + 1);
}

/**
 * printer - tells us the level we @
 * @tree: root node address
 * @func: function to be called at a paticular nodes
 * @level: height of node
 */
void printer(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (tree == NULL)
		return;

	if (level == 1)
		func(tree->n);

	else if (level > 1)
	{
		printer(tree->left, func, level - 1);
		printer(tree->right, func, level - 1);
	}
}


/**
 * binary_tree_levelorder - level-order traversal method
 * @tree: root node tree pointer
 * @func: func to be called at the node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i = 1;

	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_height(tree) + 1;

	while (i <= height)
	{
		printer(tree, func, i);
		i++;
	}
}
