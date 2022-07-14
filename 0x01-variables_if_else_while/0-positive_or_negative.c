#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**

 *main - prints the number if its zero, positive or negative

 *Return: Always 0 when the code finishes

 */
int main(void) 
{  
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;  
if (n > 0)
printf("%d is positive\n", n);  
if (n == 0)
printf("%d is zero\n", n);
if (n < 0)
{
printf("%d is negative\n", n);  
}
return (0); 
}
