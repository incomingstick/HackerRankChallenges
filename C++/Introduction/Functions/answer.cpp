#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
  int ret;

  if (a > b) {
    ret = a;
  } else {
    ret = b;
  }

  if (c > ret) {
    ret = c;
  }

  if (d > ret) {
    ret = d;
  }

  return ret;
}

int main() {
  int a, b, c, d;

  scanf("%d %d %d %d", &a, &b, &c, &d);

  int ans = max_of_four(a, b, c, d);

  printf("%d", ans);

  return 0;
}
