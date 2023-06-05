0x13. C - More singly linked lists
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc is forbidden
You are allowed to use _putchar
You dont have to push _putchar.c, we will use our file. If you do it wont be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you dont have to push them to your repo (if you do we wont take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
Dont forget to push your header file
All your header files should be include guarded
Tasks
0. Print list
mandatory
Write a function that prints all the elements of a listint_t list.
1. List length
mandatory
Write a function that returns the number of elements in a linked listint_t list.
2. Add node
mandatory
Write a function that adds a new node at the beginning of a listint_t list.
3. Add node at the end
mandatory
Write a function that adds a new node at the end of a listint_t list.
4. Free list
mandatory
Write a function that frees a listint_t list.
5. Free
mandatory
Write a function that frees a listint_t list.
6. Pop
mandatory
Write a function that deletes the head node of a listint_t linked list, and returns the head nodes data (n)
7. Get node at index
mandatory
Write a function that returns the nth node of a listint_t linked list.
8. Sum list
mandatory
Write a function that returns the sum of all the data (n) of a listint_t linked list.
9. Insert
mandatory
Write a function that inserts a new node at a given position.
10. Delete at index
mandatory
Write a function that deletes the node at index index of a listint_t linked list.
11. Reverse list
#advanced
Write a function that reverses a listint_t linked list.
12. Print (safe version)
#advanced
Write a function that prints a listint_t linked list.
13. Free (safe version)
#advanced
Write a function that frees a listint_t list.
14. Find the loop
#advanced
Write a function that finds the loop in a linked list.
