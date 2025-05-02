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

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j >= (n - 1) - i) {
        printf("#");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
