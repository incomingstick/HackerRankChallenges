#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Alice Scores
  int a0;
  int a1;
  int a2;
  scanf("%d %d %d", &a0, &a1, &a2);

  // Bob Scores
  int b0;
  int b1;
  int b2;
  scanf("%d %d %d", &b0, &b1, &b2);

  int A;
  int B;

  if (a0 < b0)
    B++;
  else if (a0 > b0)
    A++;

  if (a1 < b1)
    B++;
  else if (a1 > b1)
    A++;

  if (a2 < b2)
    B++;
  else if (a2 > b2)
    A++;

  printf("%d %d", A, B);

  return 0;
}
