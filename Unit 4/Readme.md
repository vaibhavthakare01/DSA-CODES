

# Contact Directory Using Right-Threaded Binary Search Tree (BST)

## 1\. About the Project

The Contact Directory Using a Right-Threaded Binary Search Tree is a data structure project developed to store and manage contact information efficiently. It uses a Right-Threaded Binary Search Tree (RTBST) to organize contacts in sorted order.

In a right-threaded BST, the right pointer of a node that does not have a right child is used to point to its inorder successor. This allows the tree to be traversed without using recursion or an auxiliary stack.

The main objective of this project is to demonstrate the implementation of contact insertion and inorder traversal using a right-threaded binary search tree.

## 2\. Features

- **Contact Insertion:** Insert new contacts into the directory while maintaining the Binary Search Tree property.
- **Inorder Traversal:** Display contacts in sorted order without recursion or a stack.
- **Right Threading:** Use unused right pointers to connect nodes to their inorder successors.
- **Efficient Navigation:** Move through the tree using child pointers and threads.
- **Dynamic Storage:** Allocate memory for contact nodes as required.
- **Organized Records:** Maintain contacts according to the selected sorting key, such as contact name.

## 3\. Data Structure Used

### Right-Threaded Binary Search Tree

A Right-Threaded Binary Search Tree is a modified BST in which the right pointer of a node with no right child points to its inorder successor instead of remaining NULL.

Each node typically contains:

- Contact information, such as name and phone number.
- A pointer to the left child.
- A pointer to the right child or inorder successor.
- A flag indicating whether the right pointer represents a child or a thread.

### Why Use a Right-Threaded BST?

- It enables inorder traversal without recursion.
- It eliminates the need for an auxiliary stack during traversal.
- It allows direct access to the inorder successor through a thread.
- It maintains contacts in sorted order according to the BST key.

## 4\. Technology Used

- **Pointers:** Connect nodes and manage child links and threads.
- **Structures:** Represent contact records and tree nodes.
- **Dynamic Memory Allocation:** Create nodes as new contacts are inserted.
- **Conditional Statements and Loops:** Implement insertion and traversal logic.

## 5\. Programming Language

**C Programming Language**

C is used to implement the project because it supports structures, pointers, and dynamic memory allocation, which are essential for implementing a threaded binary search tree.

## 6\. Applications

- **Phone Directories:** Store and display contact details in sorted order.
- **Contact Management Systems:** Organize names and associated contact information.
- **Student Record Systems:** Maintain student details using a searchable tree structure.
- **Employee Databases:** Organize employee records based on a selected key.
- **Educational Purposes:** Demonstrate threaded trees, pointer manipulation, and non-recursive traversal.

## 7\. Advantages

- Inorder traversal does not require recursion or an auxiliary stack.
- Contacts can be displayed in sorted order.
- Threads make inorder successor navigation straightforward.
- Dynamic memory allocation allows the directory to grow as contacts are added.
- The project demonstrates an alternative to conventional BST traversal techniques.

## 8\. Conclusion

The Contact Directory Using a Right-Threaded Binary Search Tree demonstrates how a threaded tree can be used to organize contact information and perform inorder traversal efficiently.

By using threads to connect nodes to their inorder successors, the project avoids recursion and the use of an auxiliary stack during traversal. It provides practical experience with binary search trees, pointers, structures, and dynamic memory allocation in C.

This project is useful for understanding advanced data structures and their applications in contact management and sorted record storage.

