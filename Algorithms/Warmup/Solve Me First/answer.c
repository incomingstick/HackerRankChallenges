#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solveMeFirst(int a, int b) {
  // Hint: Type return a+b; below
  return a + b;
}

int main() {
  int num1, num2;
  scanf("%d %d", &num1, &num2);
  int sum;
  sum = solveMeFirst(num1, num2);
  printf("%d", sum);
  return 0;
}