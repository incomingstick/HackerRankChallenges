#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  long long int sum = 0;
  for (int arr_i = 0; arr_i < n; arr_i++) {
    scanf("%lld", &arr[arr_i]);
    sum += arr[arr_i];
  }
  printf("%lld", sum);
  return 0;
}