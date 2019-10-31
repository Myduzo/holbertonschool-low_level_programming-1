# Overview #
The source codes contained in this directory are to help better understand singly linked lists in C programming.

# General #
1. When and why using linked lists vs arrays?  
Both linked lists and arrays store linear data of similar types.  The follow table summarizes the key differences between the two.

| Linked Lists                                                              | Arrays                                                              |
| ------------------------------------------------------------------------- | ------------------------------------------------------------------- |
| 1. Elements are stored randomly                                           | 1. Elements are stored in order                                     |
| 2. To access an element, you have to start from the head and work forward | 2. To access an element, you write the variable name with its index |
| 3. Insertion and deletion will be quick                                   | 3. Insertion and deletion will consume more time                    |
| **4. Size is flexible and dynamic**                                       | **4. Fixed size**                                                   |
| **5. Memory is assigned during execution**                                | **5. Memory is assigned during compilation**                        |

2. How to build and use linked lists?  
A linked list is made up of nodes that contains elements.  Pointers are used to link an element to another element that's stored in another node.  The last node of a linked list is NULL.  Each node is a pair of data and pointer, this pointer points to the next node.

The following program code shows how to use a linked list.
```C
struct LinkedList{
	int data;
	struct LinkedList *next;
};
typedef struct LinkedList *node; /* define node as pointer of data type struct LinkedList */

node createNode()
{
	node temp; /* declare a node */
	temp = (node)malloc(sizeof(struct LinkedList)); /* allocate memory using malloc() */
	temp->next = NULL; /* make next pointer to NULL */
	return temp; /*return the new node */
}

node addNode(node head, int value)
{
	node temp,p; /* declare two nodes temp and p */
	temp = createNode(); /* createNode will return a new node with data = value and next pointing to NULL */
	temp->data = value; /* add element's value to data part of node */
	if(head == NULL)
	{
		head = temp; /* when linked list is empty */
	}
	else
	{
		p  = head; /* assign head to p */ 
		while(p->next != NULL)
		{
			p = p->next; /* traverse the list until p is the last node and the last node always points to NULL */
		}
		p->next = temp; /* Point the previous last node to the new node created */
	}
	return head;
}
```

# Tasks #
0. Print list  
Write a function that prints all the elements of a list.  
Prototype: size\_t print\_list(const list\_t \*h);

1. List length  
Write a function that returns the number of elements in a linked list.  
Prototype: size\_t list\_len(const list\_t \*h);

2. Add node  
Write a function that adds a new node at the beginning of a list.  
Prototype: list\_t \*add\_node(list\_t \*\*head, const char \*str);

3. Add node at the end  
Write a function that adds a new node at the end of a list.  
Prototype: list\_t \*add\_node\_end(list\_t \*\*head, const char \*str);

4. Free list  
Write a function that frees a list.  
Prototype: void free\_list(list\_t \*head);

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
