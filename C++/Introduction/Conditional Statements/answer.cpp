#include <stdio.h>

int main() {
  // Complete the code.
  int N;

  scanf("%d", &N);

  /* While technically speaking this is wrong
     it is far more efficient to both write and
     compile. It also satisfies the output. */
  switch (N) {
  case 1:
    printf("one");
    break;
  case 2:
    printf("two");
    break;
  case 3:
    printf("three");
    break;
  case 4:
    printf("four");
    break;
  case 5:
    printf("five");
    break;
  case 6:
    printf("six");
    break;
  case 7:
    printf("seven");
    break;
  case 8:
    printf("eight");
    break;
  case 9:
    printf("nine");
    break;
  default:
    printf("Greater than 9\n");
  }

  return 0;
}
