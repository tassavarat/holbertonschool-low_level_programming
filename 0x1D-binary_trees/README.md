# 0x1D. C - Binary trees

## Learning Objectives
What you should learn from this project:

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

## Requirements
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project, is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the standard library
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called binary_trees.h
* Don’t forget to push your header file
* All your header files should be include guarded
---

### [0. New node](./0-binary_tree_node.c)
Write a function that creates a binary tree node

* Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
* Where `parent` is a pointer to the parent node of the node to create
* And `value` is the value to put in the new node
* When created, a node does not have any child
* Your function must return a pointer to the new node, or `NULL` on failure
```C
alex@/tmp/binary_trees$ cat 0-main.c 
#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);

    root->left = binary_tree_node(root, 12);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 16);

    root->right = binary_tree_node(root, 402);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    binary_tree_print(root);
    return (0);
}
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
alex@/tmp/binary_trees$ ./0-node
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
alex@/tmp/binary_trees$
```

### [1. Insert left](./1-binary_tree_insert_left.c)


### [2. Insert right](./2-binary_tree_insert_right.c)


### [3. Delete](./3-binary_tree_delete.c)


### [4. Is leaf](./4-binary_tree_is_leaf.c)


### [5. Is root](./5-binary_tree_is_root.c)


### [6. Pre-order traversal](./6-binary_tree_preorder.c)


### [7. In-order traversal](./7-binary_tree_inorder.c)


### [8. Post-order traversal](./8-binary_tree_postorder.c)


### [9. Height](./9-binary_tree_height.c)


### [10. Depth](./10-binary_tree_depth.c)


### [11. Size](./11-binary_tree_size.c)


### [12. Leaves](./12-binary_tree_leaves.c)


### [13. Nodes](./13-binary_tree_nodes.c)


### [14. Balance factor](./14-binary_tree_balance.c)


### [15. Is full](./15-binary_tree_is_full.c)


### [16. Is perfect](./16-binary_tree_is_perfect.c)


### [17. Sibling](./17-binary_tree_sibling.c)


### [18. Uncle](./18-binary_tree_uncle.c)


### [19. Lowest common ancestor](./100-binary_trees_ancestor.c)


### [20. Level-order traversal](./101-binary_tree_levelorder.c)


### [21. Is complete](./102-binary_tree_is_complete.c)


### [22. Rotate left](./103-binary_tree_rotate_left.c)


### [23. Rotate right](./104-binary_tree_rotate_right.c)


### [24. Is BST](./110-binary_tree_is_bst.c)


### [25. BST - Insert](./111-bst_insert.c)


### [26. BST - Array to BST](./112-array_to_bst.c)


### [27. BST - Search](./113-bst_search.c)


### [28. BST - Remove](./114-bst_remove.c)


### [29. Big O #BST](./115-O)


### [30. Is AVL](./120-binary_tree_is_avl.c)


### [31. AVL - Insert](./121-avl_insert.c)


### [32. AVL - Array to AVL](./122-array_to_avl.c)


### [33. AVL - Remove](./123-avl_remove.c)


### [34. AVL - From sorted array](./124-sorted_array_to_avl.c)


### [35. Big O #AVL Tree](./125-O)


### [36. Is Binary heap](./130-binary_tree_is_heap.c)


### [37. Heap - Insert](./131-heap_insert.c)


### [38. Heap - Array to Binary Heap](./132-array_to_heap.c)


### [39. Heap - Extract](./133-heap_extract.c)


### [40. Heap - Sort](./134-heap_to_sorted_array.c)


### [41. Big O #Binary Heap](./135-O)

---

## Authors
* **Tim Assavarat** - [tassavarat](https://github.com/tassavarat)
* **Julienne Tesoro** - [jmtes](https://github.com/jmtes)
