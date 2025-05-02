#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

struct Edge {
  int x;
  int y;
  int r;
};

int algorithm(int a, int b, Edge graph[], int arr_size);

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int N;
  cin >> N;

  /* Constraint: 2 <= N <= 400 */
  if (N < 2 || N > 400) {
    printf("%d must be between 2 and 400 inclusive. Try again.\n", N);
    cin.clear();
    return main();
  }

  int M;
  cin >> M;

  /* Constraint: 1 <= M <= (N*(N-1))/2 */
  if (M < 1 || M > (N * (N - 1)) / 2) {
    printf("%d must be between 1 and (N*(N-1))/2 inclusive. Try again.\n", M);
    cin.clear();
    return main();
  }

  Edge graph[M];

  for (int i = 0; i < M; i++) {
    int x;
    cin >> x;

    /* Constraint: 1 <= x, y <= N */
    if (x < 1 || x > N) {
      printf("%d must be between 1 and N inclusive. Try again.\n", x);
      i--;
      cin.clear();
      continue;
    }

    int y;
    cin >> y;

    /* Constraint: 1 <= x, y <= N */
    if (y < 1 || y > N) {
      printf("%d must be between 1 and N inclusive. Try again.\n", y);
      i--;
      cin.clear();
      continue;
    }

    int r;
    cin >> r;

    /* Constraint: 1 <= r <= 350 */
    if (r < 1 || r > 350) {
      printf("%d must be between 1 and 350 inclusive. Try again.\n", r);
      i--;
      cin.clear();
      continue;
    }

    graph[i].x = x;
    graph[i].y = y;
    graph[i].r = r;
  }

  int Q;
  cin >> Q;

  /* Constraint: 1 <= Q <= 10^5 */
  if (Q < 1 || Q > pow(10, 5)) {
    printf("%d must be between 1 and 10^5 inclusive. Try again.\n", N);
    cin.clear();
    return main();
  }

  int ans[Q];

  for (int i = 0; i < Q; i++) {
    /* NOTE: No constraints given for a or b */
    int a;
    cin >> a;

    int b;
    cin >> b;

    ans[i] = algorithm(a, b, graph, N);
  }

  for (int i = 0; i < Q; i++) {
    printf("%d\n", ans[i]);
  }

  return 0;
}

/* My algorithm to find the shortest distances between nodes. */
int algorithm(int a, int b, Edge graph[], int arr_size) {
  if (a == b)
    return 0;
  if (a < 1 || a > 400)
    return -1;
  if (b < 1 || b > 400)
    return -1;

  /* Obviously this is not correct. I don't have time to finish this problem
   * now. */
  return graph[0].r;
}
