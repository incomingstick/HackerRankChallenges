#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    const unsigned int mod = 1 << 31;
    int N, S, P, Q;

    cin >> N >> S >> P >> Q;

    unsigned int* a = new unsigned int[N];

    a[0] = S % mod;

    for(int i = 1; i < N; i++) {
        a[i] = (a[i - 1] * P + Q) % mod;
    }

    // cs == cycle size, ci == cycle index
    int cs, ci;

    // floyd's algorithm
    for (int i = 0; i < N; i++) {
        if ((2 * i) + 1 > N - 1) {
            // N distinct values, output N, clean up and terminate execution
            cout << N;
            delete[] a;
            return 0;

        } else if(a[i] == a[(2 * i) + 1]) {
            // break loop to proceed with algorithm
            cs = i + 1;
            break;
        }
    }
 
    // find first element
    for (int i = 0; i < N; i++) {
        if(a[i] == a[i + cs]) {
            ci = i;
            break;
        }
    }
 
    // find first reoccurence of first element
    for (int i = ci + 1; i < N; i++) {
        if(a[ci] == a[i]) {
            // number of elements up until first repeated element == number of distinct values in sequence
            cout << i;
            break;
        }
    }

    delete[] a;
    return 0;
}
