# Bit Array
You are given four integers: **_N_**, **_S_**, **_P_**, **_Q_**. You will use them in order to create the sequence **_a_** with the following pseudo-code.
```C++
a[0] = S (modulo 2^31)
for i = 1 to N-1
    a[i] = a[i-1]*P+Q (modulo 2^31) 
```
Your task is to calculate the number of distinct integers in the sequence **_a_**.

## Input Format

Four space separated integers on a single line, **_N_**, **_S_**, **_P_**, and **_Q_** respectively.

## Output Format

A single integer that denotes the number of distinct integers in the sequence **_a_**.

## Constraints
**1 <= _N_ <= 10^8**  
**0 <= _S, P, Q_ <= 2^31**
## Sample Input
```
3 1 1 1
```
## Sample Output
```
3
```
## Explanation
**_a_** = **[1, 2, 3]**  
Hence, there are **3** different integers in the sequence.
