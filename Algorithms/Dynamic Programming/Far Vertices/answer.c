#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    scanf("%d", &N);

    if (N < 1 || N > 100)
    {
        printf("%d must be between 1 and 100 inclusive. Try again.", N);
        return main();
    }

    int K;
    scanf("%d", &K);

    if (K >= N)
    {
        printf("%d must be less than %d. Try again.", K, N);
        return main();
    }

    for (int i = 0; i < N - 1; i++)
    {
        int ui;
        scanf("%d", &ui);

        if (ui < 1 || ui > N)
        {
            printf("%d must be between 1 and %d. Try again.", ui, N);
            i--;
            continue;
        }

        int vi;
        scanf("%d", &vi);

        if (vi < 1 || vi > N)
        {
            printf("%d must be between 1 and %d. Try again.", vi, N);
            i--;
            continue;
        }
    }

    return 0;
}