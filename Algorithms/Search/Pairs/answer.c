#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int pairs(int a_size, int* a, int k) {
    int ans = 0;
    
    int i = 0, j = 1;
    while(j < a_size) {
        int diff = a[j] - a[i];

        if(diff > k) {
            i++;
        } else if(diff < k) {
            j++;
        } else {
            ans++;
            j++;
        }
    }

    return ans;
}

/* Comparison function to help sort the 
   array before calling the pairs function. */
int comp (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

int main() {
    int res;
    int _a_size, _a_i, _k;

    scanf("%d %d", &_a_size, &_k);

    int _a[_a_size];

    for(_a_i = 0; _a_i < _a_size; _a_i++) { 
        int _a_item;
        scanf("%d", &_a_item);
        
        _a[_a_i] = _a_item;
    }
    
    qsort(_a, sizeof(_a)/sizeof(*_a), sizeof(*_a), comp);

    res = pairs(_a_size, _a, _k);
    
    printf("%d\n",res);   
    
    return 0;
}
