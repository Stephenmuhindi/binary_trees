#include "binary_trees.h"

/**
 * binary_tree_is_root - tunacheck if the node ni root
 * @node: pointer tunaangalia
 * Return: kama node ni root -1 or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
