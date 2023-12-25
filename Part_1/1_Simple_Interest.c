#include <stdio.h>
//calculation of simple interest
float simple_interest(float p, float r, float t) {
  return (p*r*t) / 100;
}

int main() {
  float principal, rate, time, interest;
  printf("Enter the principal amount: ");
  scanf("%f",&principal);
  printf("Enter the rate of interest: ");
  scanf("%f",&rate);
  printf("Enter the time in years: ");
  scanf("%f",&time);
  interest = simple_interest(principal, rate, time); // Calling the function
  printf("The simple interest is: %.2f", interest);
  return 0;
}
