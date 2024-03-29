#include "binary_trees.h"

/**
 * binary_tree_postorder - Tunatumia post-order traversal method
 * @tree: pointer ya root node ya tree yenye tunacheki
 * @func: pointer to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
