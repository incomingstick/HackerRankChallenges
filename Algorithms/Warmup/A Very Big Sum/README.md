# A Very Big Sum
You are given an array of integers of size . You need to print the sum of the elements in the array, keeping in mind that some of those integers may be quite large.

## Input Format

The first line of the input consists of an integer **_N_**. The next line contains **_N_** space-separated integers contained in the array.

## Output Format

Print a single value equal to the sum of the elements in the array.

## Constraints 
 **1 <= _N_ <= 10**  
**0 <= A[_i_] <= 10^10**
## Sample Input
```
5
1000000001 1000000002 1000000003 1000000004 1000000005
```
## Output
```
5000000015
```
**Note:**  
The range of the 32-bit integer is **_(-2^31) to (2^31 - 1)_ or [-2147483648, 2147483648]**.  
When we add several integer values, the resulting sum might exceed the above range. You might need to use long long int in C/C++ or long data type in Java to store such sums.