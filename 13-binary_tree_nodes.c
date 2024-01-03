#include "binary_trees.h"

/**
 * binary_tree_nodes - Count nodes with at least 1 child
 * @tree: pointer to the root ya binary tree
 * Return: NULL=0,else nodecount
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
