#include <stdio.h>

//without varaible
void swap(long *a, long *b);

void main()
{
long x, y;
printf("Enter the value of x: ");
scanf("%ld", &x);
printf("Enter the value of y: ");
scanf("%ld", &y);
printf("Before swapping, x = %ld and y = %ld", x, y);
swap(&x, &y);
printf("After swapping, x = %ld and y = %ld", x, y);
}
void swap(long *a, long *b)
{
*a = *a + *b; 
*b = *a - *b; 
*a = *a - *b; 
}
