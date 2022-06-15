#Monty

A simple integer stack command line interface. Defaults to last in first out, with the queue command switching it to first in first out.

(Also some brainfuck scripts that were part of this project set in the brainfuck folder)

monty can also be said to be an interpreter of Monty ByteCodes files, which is a scripting language just like Python.

## Monty language
This is a language that contains specific instructions to manipulate data information (stacks or queues), where each instruction (called opcode) is sended per line. Files which contains Monty byte codes usually have the .m extension.

Example (file.m):
$ cat file.m
 Pushing element to the stack
push 0
push 1
push 2
 Printing all elements
pall
push 3
push 4
pop
 Rotating the stack to the bottom
rotr
pall
rotl
 Setting FIFO
queue
push 5
 Setting LIFO
stack
push 5
$
##OPCODE

###commands

monty executes the following:

1.push 

Pushes an integer onto the stack.

2.pall 

Prints all integers on the stack, starting at the top..

3.pint

Prints the integer at the top of the stack.

4.pop 

Removes top element of stack.

5.swap 

Swaps top two elements of the stack.

6.add 

Add top two elements of the stack, remove them, and push result onto stack.

7.sub 

Subtract top two elements of the stack, remove them, and push result onto stack.

8.div 

Integer divide top two elements of the stack, remove them, and push result onto stack.

9.mul 

Multiply top two elements of the stack, remove them, and push result onto stack.

10.mod 

Integer division remainder top two elements, remove them, push result onto stack.

11.pchar 

Print the ascii character based on top integer in stack.

12.pstr 

Print the ascii characters related to integers in stack until 0 or >255.

13.rotl 

Rotate stack. Top element becomes last. Second from top becomes top.

14.rotr 

Rotate stack. Last element becomes top, Top element becomes second from top.

15.stack

 Changes mode to first in first out (the default behavior). Front of queue becomes top of stack.

16.queue

 Changes mode to last in first out. Top of stack becomes front of queue.
##Getting started

To compile all files:

$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
$

The synopsis of the interpreter is the following:

$ ./monty [filename]
$

#Authors

Shalom Muraguri.
