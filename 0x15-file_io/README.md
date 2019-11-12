# Overview #
The program codes contained in this directory are to help better understand File I/O in C programming.  

# General #
0. Look for the right source of information online  
See Resources below.  

1. How to create, open, close, read and write files?  
A file is a container that preserves data.  There are two types of files: text and binary.  In C programming, there are file management functions performed on either text or binary files.  These functions could be categorized into:  

    1. Creating a new file  
    2. Opening an existing file  
    3. Closing a file  
    4. Reading from and writing information to a file  

The following are the file management functions:  

| Function | Purpose                                               | Syntax                                                 |
| -------- | ----------------------------------------------------- | ------------------------------------------------------ |
| open     | Opening a file                                        | int open{const char \*path, int oflag, ...)            |
| creat    | Creating a file                                       | int creat(const char \*path, mode\_t mode)             |
| fopen    | Creating a file or opening an existing file           | FILE \*fopen(const char \*filename, const char \*mode) |
| fclose   | Closing a file                                        | int fclose(FILE \*stream)                              |
| fprintf  | Writing a block of data to file                       | int fprint(FILE \*stream, const char \*format, ...)    |
| fscanf   | Reading a block data from a file                      | int fscanf(FILE \*stream, const char \*format, ...)    |
| getc     | Reading a single character from a file                | int getc(FILE \*stream)                                |
| putc     | Writing a single character to a file                  | int putc(int c, FILE \*stream)                         |
| getw     | Reading an integer from a file                        | int getw(FILE \*stream)                                |
| putw     | Writing an integer to a file                          | int putw(int w, FILE \*stream);                        |
| fseek    | Sets position of file pointer to a specified location | int fseek(FILE \*stream, long offset, int whence)      |
| ftell    | Returns current position of a file pointer            | long ftell(FILE \*stream)                              |
| rewind   | Sets file pointer at the beginning of a file          | void rewind(FILE \*stream)                             |

2. What are file descriptors?  
A file descriptor (FD or fildes) is used to access a file or other input/output resource.  It's a number that identifies an open file in the operating system.  There's at least one file descriptor for every open file.  The number is an unsigned int.  

3. What are the 3 standard file descriptors, what are their purpose and what are their POSIX names?  
On Unix, the first three standard file descriptors are for input/output streams.  They are summarized in the table below along with their purpose and Portable Operating System Interface (POSIX) names.

| File descriptor | Name            | <unistd>       | <stdio.h>  | Purpose                       | 
| --------------- | --------------- | -------------- | ---------- | ----------------------------- |
| 0               | Standard input  | STDIN\_FILENO  | stdin      | Keyboard input                |
| 1               | Standard output | STDOUT\_FILENO | stdout     | Output on screen              |
| 2               | Standard error  | STDERR\_FILENO | stderr     | Output on screen due to error |

4. How to use the I/O system calls open, close, read and write?  
See 1. above.  

5. What are and how to use the flags O\_RDONLY, O\_WRONLY, O\_RDWR?  
The oflags are used with the open function to set file access rights.  O\_RDONLY is to open for reading only.  O\_WRONLY is to open for writing only.  O\_RDWR is to open for reading and writing.  

6. What are file permissions, and how to set them when creating a file with the open system call?  
A file permission controls a user's ability to read, write, modify, execute and even navigate the contents of a file.  When using the open or creat function to create a file, use the optional mode to specify the permission.  The oflag, O\_CREAT must be specified along with the mode.  The mode will specify the type of permission to be granted.  'r' represents read, 'w' represents write and 'x' represents executable.  

7. What is a system call?  
A system call is a programmtic way to interact with the operating system.  The program used will request service from the kernel of the operating system.  It's the only entry point into the kernel.  There're five different types of system calls: process control, file management, device management, information maintenance and communication.  

8. What is the difference between a function and a system call?  
In C programming, a function resides in the standard C library.  Thus, a function is executed through program code.  There're functions that don't call any system call such as string fuctions, strlen or strcat.  Some functions that makes a system call are fopen or write.  The diagram below shows the interaction between program code, functions and system calls.  

![filei/o](https://i.imgur.com/aK30ZbL.png)

# Quiz #
0. What is the unistd symbolic constant for the standard input?  
STDIN\_FILENO  

1. What is the unistd symbolic constant for the standard output?  
STDOUT\_FILENO  

2. What is the unistd symbolic constant for the Standard error?  
STDERR\_FILENO  

3. What is the oflag used to open a file with the mode read only?  
O\_RDONLY  

4. What is the oflag used to open a file in mode read + write?  
O\_RDWR  

5. What is the correct combination of oflags used to open a file with the mode write only, create it if it doesn’t exist and append new content at the end if it already exists?  
0\_WRONLY | O\_CREAT | O\_APPEND  

6. Is open a function or a system call?  
It's a function, a system call and it's a function provided by the kernel.  

7. What system call would you use to write to a file descriptor?   
write  

8. Without context, on Ubuntu 14.04 LTS, write is a …?  
It's a executable and system call.  

9. What is the return value of the system call open if it fails?  
-1  

10. Most of the time, on a classic, modern Linux system, what will be the value of the first file descriptor you will get after opening a new file with open (if open succeeds of course):  
3  

11. Why?  
Because most of the time, I will alrady have stdin (value 0), stdout (value 1) and stderr (value 2) opened when my program starts executing.  

12. Which of these answers are the equivalent of O\_RDWR on Ubuntu 14.04 LTS?   
2  
1 << 1  
3 & 2  
(O\_WRONLY << 1)  
Tip: Use printf or read the headers to see the definitions/values of these macros.  

13. What happens if you try to write “Holberton” to the standard input on Ubuntu 14.04 LTS?  
The text will be printed on the terminal on the standard output.  

14. When I am using O\_WRONLY | O\_CREAT | O\_APPEND -> the | are bitwise operators.  
True  

# Tasks #





# Resources #
0. C Files I/O: Create, Open, Read, Write and Close a File  
<https://www.guru99.com/c-file-input-output.html>

1. C File Handling  
<https://www.programiz.com/c-programming/c-file-input-output>

2. File Descriptor  
<https://en.wikipedia.org/wiki/File_descriptor>

3. C Programming in Linux Tutorial #024 - open() read() write() Functions  
<https://www.youtube.com/watch?v=dP3N8g7h8gY>

4. File Descriptor  
<https://www.computerhope.com/jargon/f/file-descriptor.htm>

5. Introduction of System Call  
<https://www.geeksforgeeks.org/introduction-of-system-call/>

6. What is mode\_t in C?  
<https://jameshfisher.com/2017/02/24/what-is-mode_t/>

7. What is Linux System Calls and Library Functions?  
<https://www.thegeekstuff.com/2012/07/system-calls-library-functions/>

# Contributor(s) #
Jennifer Tang  

