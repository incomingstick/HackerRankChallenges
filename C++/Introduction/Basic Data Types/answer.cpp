#include <cstdio>
using namespace std;

int main() {
    int a;
    long b;
    long long c;
    char d;
    float e;
    double f;

    scanf("%d %ld %lld %c %f %lf", &a, &b, &c, &d, &e, &f);

    printf("%d\n", a);      // Print int
    printf("%ld\n", b);     // Print long
    printf("%lld\n", c);    // Print long long
    printf("%c\n", d);      // Print char
    printf("%f\n", e);    // Print float
    printf("%lf\n", f);   // Print double

    return 0;
}
