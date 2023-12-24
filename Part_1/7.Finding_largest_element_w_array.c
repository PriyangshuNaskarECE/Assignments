#include <stdio.h>

//finding the largest element
int find_max(int arr[], int n) {
  int max=arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}


int main() {
  int arr[] = {10, 20, 15, 25, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("The largest element in the array is %d", find_max(arr, n));
  return 0;
}
