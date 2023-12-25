#include <stdio.h>

//calculating factorial
long long factorial(int num) {
if (num == 0 || num == 1) {
return 1;
} else {
return num * factorial(num - 1);
}
}
long long nCr(int n, int r) {
if (n<r||n<0||r<0){
return 0; 
}
return factorial(n) / (factorial(r) * factorial(n - r));
}
int main() {
int n, r;
printf("Enter the value of n: ");
scanf("%d", &n);
printf("Enter the value of r: ");
scanf("%d", &r);
long long result = nCr(n, r);
printf("%dC%d = %lld\n", n, r, result);
return 0;
}
