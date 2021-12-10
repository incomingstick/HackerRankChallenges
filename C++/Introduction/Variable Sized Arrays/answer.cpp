#include <iostream>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    int* arr[N];

    for(int i = 0; i < N; i++) {
        cin >> k;
        arr[i] = (int*)malloc(k * sizeof(int));

        for(int j = 0; j < k; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < Q;  i++) {
        int a, b;
        cin >> a >> b;
        cout << arr[a][b] << endl;
    }

    return 0;
}