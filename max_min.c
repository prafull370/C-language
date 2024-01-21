#include <stdio.h>
#include <limits.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr) / sizeof(arr[0]);

  int max = INT_MIN;
  int min = INT_MAX;

  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min){
      min = arr[i];
    }
  }

  printf("Maximum element: %d\n", max);
  printf("Minimum element: %d\n", min);

  return 0;
}