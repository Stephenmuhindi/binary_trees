 A basic understanding requirement for the 0x1D. C - Binary trees project
done by Zablon samba and steve muhindi



A binary search tree is a rooted binary tree in which nodes are arranged in strict total order in which the nodes with keys greater than any particular node A is stored on the right sub-trees to that node A and the nodes with keys equal to or less than A are stored on the left sub-trees to A, satisfying the binary search property. 

Binary search trees are also efficacious in sortings and search algorithms. However, the search complexity of a BST depends upon the order in which the nodes are inserted and deleted; since in worst case, successive operations in the binary search tree may lead to degeneracy and form a singly linked list (or "unbalanced tree") like structure, thus has the same worst-case complexity as a linked list.

Binary search trees are also a fundamental data structure used in construction of abstract data structures such as sets, multisets, and associative arrays.

The terms "depth," "height," and "size" in the context of a binary tree refer to different aspects of its structure:

The depth of a node in a binary tree is the number of edges on the path from the root to that node.
The depth of the root node is 0.
The maximum depth of any node in a binary tree is the height of the tree.
Height (or Depth):

The height of a binary tree is the length of the longest path from the root to a leaf node.
Alternatively, it can be defined as the number of edges on the longest path from the root to a leaf.
The height of an empty tree is typically considered -1, and the height of a tree with only one node (the root) is 0.
Size (or Number of Nodes):

The size of a binary tree is the total number of nodes in the tree.
It includes all nodes – both internal nodes (with at least one child) and leaf nodes (with no children).
Mathematically, the size of a tree can be calculated as the sum of the number of nodes in its left and right subtrees, plus one for the current root node.

Traversal refers to the process of visiting and processing each node in a tree data structure. In the context of binary trees, there are three main types of tree traversals: in-order, pre-order, and post-order. These traversals differ in the order in which they visit the nodes.

In-Order Traversal:

Visit the left subtree.
Visit the current node.
Visit the right subtree.
In an in-order traversal of a binary search tree (BST), the nodes are visited in ascending order.

Pre-Order Traversal:

Visit the current node.
Visit the left subtree.
Visit the right subtree.
Pre-order traversal is useful for creating a prefix expression (Polish notation) from an expression tree.

Post-Order Traversal:

Visit the left subtree.
Visit the right subtree.
Visit the current node.
Post-order traversal is useful for deleting nodes in a tree or for creating a postfix expression (Reverse Polish notation) from an expression tree.

A complete binary tree is filled from left to right on every level.
A full binary tree has nodes with either 0 or 2 children.
A perfect binary tree is both complete and full.
A balanced binary tree has minimal height differences between its left and right subtrees.
