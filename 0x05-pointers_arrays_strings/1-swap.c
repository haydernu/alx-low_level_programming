#include "main.h"

/**
<<<<<<< HEAD
 * swap_int - swap the value of two integers.
 * 
 * @a: first integer.
 * @b: second integer.
 * 
=======
 * swap_int - function
 * @a: pointer of parameter
 * @b: pointer of parameter
>>>>>>> 5d8d257b3096c880fbb0928e5bccfaad93279175
 */
void swap_int(int *a, int *b)
{
int temp;
  
  temp = 0;
  temp = *a;
  *a = *b;
  *b = temp;
}
