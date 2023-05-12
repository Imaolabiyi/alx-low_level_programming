#include <stdio.h>
#include "main.h"

/** _putchar - write the character c to 
stdout
*@c:Ther character to print
*
*Return: On success 1.
*On error, -1 is return and errno is set
appropriately.
*/
int _putchar(char c)
{
return(write(1,&c,1));
}
