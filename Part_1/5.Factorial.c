#include <stdio.h>

//calculating factorial
int factorial(int n) {
  int fact=1;
  for (int i=1; i<=n; i++) {
    fact=fact*i;
  }
  return fact;
}

void main() {
  int n, result;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  result=factorial(n); 
  printf("The factorial of %d is: %d", n, result);
  
}
