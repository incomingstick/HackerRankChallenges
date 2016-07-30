#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int N; // Specifies the number of lines in the HRML source program
    int Q; // Specifies the number of queries.
    
    scanf("d% d%", &N, &Q);
    
    // Check 1 <= N <= 20 restraint
    if(N < 1 || N > 20) {
        printf("Restraint 1 <= N <= 20 not met.");
        return 1;
    }
    
    // Check 1 <= Q <= 20 restraint
    if(N < 1 || N > 20) {
        printf("Restraint 1 <= Q <= 20 not met.");
        return 1;
    }
    
    return 0;
}
