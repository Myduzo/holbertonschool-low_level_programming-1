**Overview**
============
The source codes contained in this directory are to help better understand function pointers (aka pointers to function) in C programming.  


**General**
===========
**1. What are function pointers and how to use them?**  
A function pointer is a pointer that points to a function.  The pointer points to code, not data.  It cannot allocate and/or deallocate memory.  Below are some of the ways to use function pointers.  

	a. Variable: Usually used as a variable

		int (\*cisfun)(int a, float b);

	b. Address: Retrieve the function's memory address

		void cisfun(void);

		f = cisfun 
		__or__
		f = &cisfun

	c. Array: Set an array of function pointers

		void (\*array[])(int, float);

	d. Argument (aka Parameter): Received as an argument and calls the function

		void cisfun(void(*ptr)())
		{
			ptr();
			__or__
			(*ptr)();
		}

**2. What does a function pointer exactly hold?**
A function pointer holds the address of a function.  It points to the first byte of code of the function.  The diagram below explains the life of a function pointer.

![header image](https://raw.githubusercontent.com/jenntang1/Images/master/Screen%20Shot%202019-10-23%20at%2010.43.40%20AM.png?token=AK5VX6UC2FNKMB4KF4K5ADS5WBVPM)

**3. Where does a function pointer point to in the virtual memory?**
A function pointer points to the memory address of a function.


**Tasks**
=========
**0. What's my name**
Write a function that prints a name.
Prototype: void print\_name(char \*name, void (\*f)(char \*));

**1. If you spend too much time thinking about a thing, you'll never get it done**
Write a function that executes a function given as a parameter on each element of an array.
Prototype: void array\_iterator(int \*array, size\_t size, void (\*action)(int));

**2. To hell with circumstances; I create opportunities**
Write a function that searches for an integer.
Prototype: int int\_index(int \*array, int size, int (\*cmp)(int));

**3. A goal is not always meant to be reached, it often serves simply as something to aim at**
Write a program that performs simple operations.
