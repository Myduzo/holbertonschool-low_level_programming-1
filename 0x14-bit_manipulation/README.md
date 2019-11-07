# Overview #
The program codes contained in this directory are to help better understand bit manipulation in C programming.  

# General #
1. Look for the right source of information without too much help  
See Resources below.

2. How to manipulate bits and use bitwise operators  
Bitwise operators are used to manipulate individual bits.  A single byte holds eight bits.  Hence, bitwise operations work on a smaller scale where it impacts bit patterns or binary representations.  Since bitwise operations are closer to the operating system, it works quicker when compressing and encrypting data.  

The following table shows the bitwise operators and their binary representation.  
![bitwise](https://i.imgur.com/uMiDcB5.png)

The following table shows the bitwise operators and their uses.  

| Operator | Description                                                                                                                   | Syntax (A holds 60 & B holds 13) | Result    |
| -------- | ----------------------------------------------------------------------------------------------------------------------------- | -------------------------------- | --------- |
| &        | Binary and Operator copies a bit to result if it exists in both operands                                                      | (A & B) = 12                       | 00001100 |
| |        | Binary or Operator copies a bit if it exists in either operand                                                                | (A | B) = 16                       | 00111101 |
| ^        | Binary XOR Operator copies the bit if it is set in one operand but not both                                                   | (A ^ B) = 49                       | 00110001 |
| ~        | Binary One's Complement Operator is unary and has the effect of flipping bits                                                 | (~ A) = ~(60)                     | -0111101  |
| <<       | Binary Left Shift Operator where the left operands value is moved left by the number of bits specificed by the right operand  | A << 2 = 240                       | 11110000 |
| >>       | Binary Right Shift Operator where the left operands value is moved right by the number of bits specified by the right operand | A >> 2 = 15                        | 00001111 |

3. Base 2? Base 8? Base 10? Base 16?  
In bit manipulation, any integer or character are represented in binary form (base 2).  It's also helpful to understand its equivalent ASCII representation.  The following table shows the values at number bases.  

| Base 2 | Base 8 | Base 10 | Base 16     |
| ------ | ------ | ------- | ----------- |
| Binary | Octal  | Decimal | Hexadecimal | 
| ------ | ------ | ------- | ----------- |
| 0000   | 000    | 0       | 0           |
| 0001   | 001    | 1       | 1           |
| 0010   | 002    | 2       | 2           |
| 0011   | 003    | 3       | 3           |
| 0100   | 004    | 4       | 4           |
| 0101   | 005    | 5       | 5           |
| 0110   | 006    | 6       | 6           |
| 0111   | 007    | 7       | 7           |
| 1000   | 010    | 8       | 8           |
| 1001   | 011    | 9       | 9           |   
| 1010   | 012    | 10      | A           |
| 1011   | 013    | 11      | B           |
| 1100   | 014    | 12      | C           |
| 1101   | 015    | 13      | D           |
| 1110   | 016    | 14      | E           |
| 1111   | 017    | 15      | F           |
| 10000  | 020    | 16      | 10          |

# Quiz #
0. What is 0x89 in base 10?  137  

1. What is 0x89 in base 2?  0b10001001  

2. What is 0b001010010 in base 10?  0b001010010  

3. What is 0b01101101 in base 16?  0b01101101  

4. What is 98 in base 2?  0b01100010  

5. What is 98 in base 16?  0x62  

6. 0x01 & 0x01 = ?  0x01  

7. 0x01 | 0x01 = ?  0x01  

8. 0x01 & 0x00 = ?  0x00  

9. 0x01 | 0x00 = ?  0x01  

10. 0x66 & 0x22 = ?  0x22  

11. 0x44 | 0x22 = ?  0x66  

12. 0x89 & 0x01 = ?  0x01  

13. 0x88 & 0x01 = ?  0x00

14. 0x02 >> 1 = ?  0x01  

15. 0x89 >> 3 = ?  0x11  

16. 0x01 << 1 = ?  0x02  

17. 0x13 << 1 = ?  0x26  

18. ~ 0x12 = ?  0xED  

19. ~ 0x98 = ?  0x67  

# Tasks #
0. 0  
Write a function that converts a binary number to an unsigned int.  
Prototype: unsigned int binary\_to\_uint(const char \*b);  

1. 1  
Write a function that prints the binary representation of a number.  
Prototype: void print\_binary(unsigned long int n);  

2. 10  
Write a function that returns the value of a bit at a given index.  
Prototype: int get\_bit(unsigned long int n, unsigned int index);  

3. 11  
Write a function that sets the value of a bit to 1 at a given index.  
Prototype: int set\_bit(unsigned long int \*n, unsigned int index);  

4. 100  
Write a function that sets the value of a bit to 0 at a given index.  
Prototype: int clear\_bit(unsigned long int \*n, unsigned int index);  

5. 101  
Write a function that returns the number of bits you would need to flip to get from one number to another.  
Prototype: unsigned int flip\_bits(unsigned long int n, unsigned long int m);  

# Resources #
0. Bitwise Operators in C  
<https://www.tutorialspoint.com/cprogramming/c_bitwise_operators.htm>  

1. The Bitwise Operators  
<https://users.cs.cf.ac.uk/Dave.Marshall/PERL/node36.html>  

2. Bitwise Operator  
<https://www.techopedia.com/definition/3467/bitwise-operator>  

3. Values of Number Bases 10, 2, 8, 16  
<http://faculty.bucks.edu/cornelld/numbersystem.htm>  

4. Bit Manipulation  
<https://www.hackerearth.com/practice/notes/bit-manipulation/>  

# Contributor(s) #
Jennifer Tang  

