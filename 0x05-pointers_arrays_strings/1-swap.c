#include "main.h"
/**
* swap_int - functions that swap values of int types
* @a: a int type paramenter
* @b: b inte type parameter
*Return: val
*/
void swap_int(int *a, int *b)
{
int val = *a;
*a = *b;
*b = val;
}
