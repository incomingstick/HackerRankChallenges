# Diagonal Difference

Given a square matrix of size _N x N_, calculate the absolute difference between the sums of its diagonals.

## Input Format

The first line contains a single integer, _N_. The next _N_ lines denote the matrix's rows, with each line containing _N_ space-separated integers describing the columns.

## Output Format

Print the absolute difference between the two sums of the matrix's diagonals as a single integer.

## Sample Input
```
3
11 2 4
4 5 6
10 8 -12
```
## Sample Output
```
15
```
## Explanation

The primary diagonal is:  
11  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;-12

Sum across the primary diagonal: 11 + 5 - 12 = 4

The secondary diagonal is:  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5  
10  
Sum across the secondary diagonal: 4 + 5 + 10 = 19
Difference: |4 - 19| = 15