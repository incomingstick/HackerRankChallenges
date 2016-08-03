# Plus Minus
Given an array of integers, calculate which fraction of its elements are _positive_, which fraction of its elements are _negative_, and which fraction of its elements are _zeroes_, respectively. Print the decimal value of each fraction on a new line.

**Note:** This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to **_10^(-4)_** are acceptable.

## Input Format

The first line contains an integer, **_N_**, denoting the size of the array.   
The second line contains **_N_** space-separated integers describing an array of numbers **_(a_0, a_1, a_2,..., a_(n-1))_**.

## Output Format

You must print the following lines:

1. A decimal representing of the fraction of positive numbers in the array.
2. A decimal representing of the fraction of negative numbers in the array.
3. A decimal representing of the fraction of zeroes in the array.

## Sample Input
```
6
-4 3 -9 0 4 1         
```
## Sample Output
```
0.500000
0.333333
Markdown
Toggle Zen Mode
Preview

0.166667
```
## Explanation

There are **3** positive numbers, **2** negative numbers, and **1** zero in the array.  
The respective fractions of positive numbers, negative numbers and zeroes are **3/6 = 0.500000**, **2/6 = 0.333333** and **1/6 = 0.16666667**, respectively. 