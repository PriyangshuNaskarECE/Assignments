#include <stdio.h>
//array traversal
int main() {
  int n, array[100];
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  printf("Enter the elements of the array: ");
  for (int i=0; i<n; i++) {
    scanf("%d", &array[i]);
  }
  printf("The odd-indexed elements of the array are: ");
  for (int i=1; i<n; i=i+2) {
    printf("%d ", array[i]);
  }
  printf("");
}
