#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node kwa right-child
 *                            ndani ya binary tree.
 * @parent: pointer ya parent ya pahali tunainsert
 * @value: kile tunaweka
 * Return: NULL, error au the node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
