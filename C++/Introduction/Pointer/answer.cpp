#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {
  // Complete this function
  int sum;
  int abs_diff;

  sum = *a + *b;
  abs_diff = abs(*a - *b);

  *a = sum;
  *b = abs_diff;
}

int main() {
  int a, b;
  int *pa = &a, *pb = &b;

  scanf("%d %d", &a, &b);
  update(pa, pb);
  printf("%d\n%d", a, b);

  return 0;
}
