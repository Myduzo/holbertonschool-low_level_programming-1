# Overview #
The program codes contained in this repository helps with learning and understanding makefiles in C programming.  

# General #
0. What are make, Makefiles?  
GNU make is a built-in utility that automatically build executables and libraries from source code by running files called Makefiles.  The make will automatically determine which source code to recompile.  It's most common in C programming but make could be used with any programming language that runs on shell.  

1. When, why and how to use Makefiles?  
Makefiles creates a link to multiple files in a program and provides commands for updating each file.  Each time a file is changed, the shell commmand, make would recompile the program.  The make utility uses the Makefile database to find the last modification time of the file to determine which file to update.  

2. What are rules and how to set and use them?  
Rules in a Makefile says when and how to remake certain files which are called targets.  Usually there's only one target for one rule.  The rules doesn't have to be in a specific order except the default.  The default should be the target of the first rule in the first Makefile.  In a situation where the first rule has multiple targets, the first target will be the default.  The exceptions to this is if a target starts with a period wouldn't be a default unless it contains "/" and if a target that defines a pattern rule also wouldn't be a default.  Thus, the first rule in the Makefile should be for compiling the whole program.  

    The following is an example of a rule.  The target is hello.o and its prerequisites are hello.o and defs.h.  The rule runs the cc command.  
    ```C
    hello.o : hello.c defs.h
              cc -c -g hello.c
    ```

3. What are explicit and implicit rules?  
An explicit rule determines when and how to remake file(s) called targets.  It would list the other files that the targets depend on called prerequisites.  It also would give a recipe to create, use or update the targets.  An implicit rule determines when and how to remake a class of files based on their names.  It would describe how a target depends on a file with a name similar to the target.  It also would give a recipe to create and update the target.  

4. What are the most common / useful rules?  
Most rules are explicit and tells make when the targets are outdated and updates them.  

5. What are variables and how to set and use them?  
Variables are used to simplify a Makefile.  A variable could initialize to hold multiple file objects so that each file object doesn't need to be listed in a rule.  The standard is to use a variable called objects to list all file objects.  

# Resources #
0. GNU  
https://www.gnu.org/software/make/manual/make.html#Overview  

1. MIT  
http://web.mit.edu/gnu/doc/html/make\_2.html  

2. Colby  
http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/  

# Contributor #
Jennifer Tang  
