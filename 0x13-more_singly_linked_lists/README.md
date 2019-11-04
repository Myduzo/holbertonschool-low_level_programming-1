# Overview #
The source codes contained in this directory are to help better understand singly linked lists in C programming.

# General #
1. How to use linked lists?  
A linked list is a linear data structure containing two key components that makes kup a node: data and pointer.  The data could contain multiple elements but there's only one pointer to the next node.  The first node is always the head and the end of a linked list is always NULL.  

A linked list is quite flexible, in that we could easily manipulate it.  We could insert a new node, delete existing node, find the length of a linked list, search for a sepcific element in a node, find a specific node, detect a loop inside a linked list and many more.  

![linkedlist](https://i.imgur.com/tgtocqP.png)

2. Start to look for the right source of information without too much help.  
See Resources below.  

# Tasks #
0. Print list  
Write a function that prints all the elements of a listint\_t list.  
Prototype: size\_t print\_listint(const listint\_t \*h);  
1. List length  
Write a function that returns the number of elements in a linked listint\_t list.  
Prototype: size\_t listint\_len(const listint\_t \*h);  
2. Add node  
Write a function that adds a new node at the beginning of a listint\_t list.  
Prototype: listint\_t \*add\_nodeint(listint\_t \*\*head, const int n);  
3. Add node at the end  
Write a function that adds a new node at the end of a listint\_t list.  
Prototype: listint\_t \*add\_nodeint\_end(listint\_t \*\*head, const int n);
4. Free list  
Write a function that frees a listint\_t list.  
Prototype: void free\_listint(listint\_t \*head);  
5. Free  
Write a function that frees a listint\_t list.  
Prototype: void free\_listint2(listint\_t \*\*head);  
6. Pop  
Write a function that deletes the head node of a listint\_t linked list, and returns the head node’s data (n).  
Prototype: int pop\_listint(listint\_t \*\*head);  
7. Get node at index  
Write a function that returns the nth node of a listint\_t linked list.  
Prototype: listint\_t \*get\_nodeint\_at\_index(listint\_t \*head, unsigned int index);  
8. Sum list  
Write a function that returns the sum of all the data (n) of a listint\_t linked list.  
Prototype: int sum\_listint(listint\_t \*head);  
9. Insert  
Write a function that inserts a new node at a given position.  
Prototype: listint\_t \*insert\_nodeint\_at\_index(listint\_t \*\*head, unsigned int idx, int n);  
10. Delete at index  
Write a function that deletes the node at index index of a listint\_t linked list.  
Prototype: int delete\_nodeint\_at\_index(listint\_t \*\*head, unsigned int index);  

# Resources #  
1. Lecture 35: Linked Lists - Richard Buckland UNSW  
<https://www.youtube.com/watch?v=udapt4FGY20&feature=youtu.be&t=2m10s>  
2. Linked List Data Structure  
<https://www.geeksforgeeks.org/data-structures/linked-list/#singlyLinkedList>  
3. Linked List - Implementation in C/C++  
<https://www.youtube.com/watch?v=vcQIFT79_50>  
4. Singly Linked List  
<https://www.hackerearth.com/practice/data-structures/linked-list/singly-linked-list/tutorial/>  
5. Understanding and implementing Linked Lists in C and Java  
<https://www.youtube.com/watch?v=VOpjAHCee7c&feature=youtu.be>  

# Contributor #
Jennifer Tang

