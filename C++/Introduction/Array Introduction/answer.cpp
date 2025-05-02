#include <cstdio>
#include <vector>

using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int N = 0;

  scanf("%d", &N);

  vector<int> arr;

  for (int i = 0; i < N; i++) {
    int temp = 0;
    scanf("%d", &temp);
    arr.push_back(temp);
  }

  for (int i = N; i > 0; i--) {
    printf("%d ", arr[i - 1]);
  }

  return 0;
}
