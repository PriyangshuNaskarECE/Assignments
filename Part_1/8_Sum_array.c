#include <stdio.h>
//calculating sum using array
int sum_array(int arr[], int n) {
  int sum=0;
  for (int i=0; i<n; i++) {
    sum+=arr[i];
  }
  return sum;
}

void main() {
int arr[] = {1, 2, 3, 4, 5};
int n = sizeof(arr) / sizeof(arr[0]);
printf("The sum of elements in the array is %d", sum_array(arr, n));
}
