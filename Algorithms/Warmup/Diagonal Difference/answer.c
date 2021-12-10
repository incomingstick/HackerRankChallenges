#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n; 
    scanf("%d",&n);
    
    int a[n][n];

    for(int a_i = 0; a_i < n; a_i++) {
       for(int a_j = 0; a_j < n; a_j++) {
          scanf("%d", &a[a_i][a_j]);
       }
    }

    int total;

    for(int a_i = 0; a_i < n; a_i++) {
        total = total + a[a_i][a_i];
        total = total - a[a_i][(n - 1) - a_i];
    }

    total = abs(total);

    printf("%d\n", total);

    return 0;
}
