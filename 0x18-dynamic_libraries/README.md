# Overview #
The program codes contained in this directory is for learning and developing proficiency in C, specifically with dynamic libraries.

# General #
0. What is a dynamic library, how does it work, how to create one, and how to use it?  
A dynamic library is also known as a shared library.  Like a static library, it collects and combines multiple object files to create one executable.  The difference is during linking which is the last step in compilation of a program code.  A static library takes all the object files and copies them permanently into the executable before runtime.  Meanwhile, a dynamic library linking doesn't permanently copy object files into the executable.  It will scan for the object files and link them at runtime.  

When creating a dynamic library, we first need to compile a list of object files and combine them into a shared library file.  We need to be mindful that when the object files are inserted into the shared library, they will take up memory space.  Hence, we need to compile for Position Independent Code (PIC) to generate relative addresses for jump calls and subroutine calls.  Also, a dynamic library is not an archive file, thus we need to compile for a shared library that's not a final program file.  

The following are the Linux commands to create a dynamic library:  

```bash
gcc -c -fPIC *.c
gcc -shared -o libgreeting.so hello.o world.o
```

When using a dynamic library, we compile using the following command.  A possible issue we might run into is if the environment variable **LD\_LIBRARY\_PATH** is already defined.  
```bash
gcc main.o -L -lgreeting -o program
```

1. What is the environment variable **$LD\_LIBRARY\_PATH** and how to use it?  
When we create a dynamic library it's obviously not already in the system.  We need to use **$LD\_LIBRARY\_PATH** to look into other directories for the newly created dynamic library.  

The following command will check if **$LD\_LIBRARY\_PATH** is already defined:  
```bash
echo $LD_LIBRARY_PATH
```

    If it's not defined, we could use the following command to define it depending on the shell type.  

    **tcsh or csh**  
   ```bash
   setenv LD_LIBRARY_PATH /full/path/to/library/directory
   ```

   **sh or bash**  
   ```bash
   LD_LIBRARY_PATH=/full/path/to/library/directory
   export LD_LIBRARY_PATH
   ```

    The following command checks if the system could locate the dynamic library:  
	```bash
	ldd program
	```

2. What are the differences between static and shared libraries?  


3. Basic usage **nm, ldd, ldconfig**?  



# Tasks #
0. A library is not a luxury but one of the necessities of life  
Create the dynamic library libholberton.so.  

1. Without libraries what have we? We have no past and no future  
Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.  

2. Either write something worth reading or do something worth writing  
Write a blog post describing the differences between static and dynamic libraries.  

# Resources #
0. What is difference between Dynamic and Static library(Static and Dynamic linking)  
https://www.youtube.com/watch?v=eW5he5uFBNM  

1. Create Static and Dynamic Link Libraries in C on Linux  
https://cs-fundamentals.com/c-programming/static-and-dynamic-linking-in-c.php  

2. Building And Using Static And Shared "C" Libraries  
http://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html#what\_is\_a\_library  

3. Shared libraries with GCC on Linux  
https://www.cprogramming.com/tutorial/shared-libraries-linux-gcc.html  

# Contributor(s) #
Jennifer Tang  
