# Overview #

The source codes contained in this directory are to help better understand variadic functions in C programming.  

# General #

1. What are variadic functions?  
A variadic function (aka varargs function) is a function that takes an unlimited number of arguments.  When **declaring** a variadic function, an ellipsis (i.e., ...) is used as the last parameter to allow the compiler to accept however many arguments.  The following are some of the ways to declare.  
	```C
	int check(int a, double b, ...);
	```
	```C
	void simple_printf(const char* fmt, ...);
	```
	And **defining** a variadic function is similar to declaring.  The following are some of the ways to define.  
	```C
	long fun(char a, double b, int c, ...);
	```
	```C
	long fun(char, double, int, ...);
	```

2. How to use va\_start, va\_arg and va\_end macros?  
The standard arguments header in the standard library contains pre-defined macros.  These macros are usually used to support variadic functions.  The macros listed below are va\_list type used to retrieve additional arguments that's in a function.  

				   | Macros   | Uses                                      |
				   | -------- | ----------------------------------------- |
				   | va_start | starts iterating arguments                |
				   | va_end   | ends the iteration                        |
				   | va_arg   | retrieves an argument                     |
				   | va_copy  | copies contents of one va_list to another |
  
	An example of their uses is shown below:

	```C
	#include <stdio.h>
	#include <stdarg.h>

	/* define a function */
	double average (int a, ...)
	{
		/* declare a va_list type variable */
		va_list arglist;
		/* declare variables */
		double sum = 0;
		int i = 0;
		/* use int parameter and va_start to initialize the va_list variable */
		va_start (arglist, a); 
		/* iterate all arguments assigned to arglist */ 
		for (; i < a; i++)
		{
			sum += va_arg (arglist, int);
		}
		/* clean memory reserved for arglist */
		va_end (arglist);
		/* returns the average */
		return (sum / a);
	}
	/* function that prints the average */
	int main(void)
	{
		printf("%d\n", average (3, 4, 5, 6));
	}
	```

3. Why and how to use the const type qualifier?
A const type qualifer is a keyword initializing a static value.  The const is part of the type, not the variable.  It can be used in multiple ways like so:

	**Simple use** is to lock in a variable's value.
	```C
	int main(void)
	{
		const int i = 3;
		return (0);
	}
	```

	**Pointer to constant** will take the memory address of the variable it points to which will not change.  

	```C
	int main(void)
	{
		int i = 3, j = 4;
		const int *ptr = &i; /* can also be int const *ptr = &i */
		return (0);
	}
	```

	**Constant pointer** is to set the pointer so that it can't point to other variables.

	```C
	int main(void)
	{
		int i = 3, j = 4;
		int *const ptr = &i;
		return (0);
	}
	```

	**Constant pointer to constant** is to lock in the variable's value and set the pointer so that it can't point to other variables.

	```C
	int main(void)
	{
		int i = 3, j = 4;
		const int *const ptr = &i;
		return (0);
	}
	```

# Tasks #

**0. Beauty is variable, ugliness is constant**  
Write a function that returns the sum of all its parameters.  
Prototype: int sum\_them\_all(const unsigned int n, ...);  

**1. To be is to be the value of a variable**  
Write a function that prints numbers, followed by a new line.  
Prototype: void print\_numbers(const char \*separator, const unsigned int n, ...);  

**2. One woman's constant is another woman's variable**  
Write a function that prints strings, followed by a new line.  
Prototype: void print\_strings(const char \*separator, const unsigned int n, ...);  

**3. To be is a to be the value of a variable**  
Write a function that prints anything.  
Prototype: void print\_all(const char * const format, ...);  

# Resources #

The following resources were used to learn and understand variadic functions.

1. stdarg(3) - Linux man page
2. https://www.tutorialspoint.com/cprogramming/c\_variable\_arguments.htm
3. https://en.wikipedia.org/wiki/Stdarg.h
4. https://www.gnu.org/software/libc/manual/html\_node/Variadic-Functions.html
5. https://www.youtube.com/watch?v=1W4oyuOdXv8
6. https://www.thegeekstuff.com/2017/05/c-variadic-functions/

