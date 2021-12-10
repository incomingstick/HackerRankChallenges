# Variable Sized Arrays
You are given **_N_** integer sequences and **_Q_** queries. Each query is in the following format: "**_a b_**" where **_a_** denotes the index of the sequence, and **_b_** denotes the index of the element in that sequence. Your task is to find the value of the element described in each query.

## Input Format

The first line consists of **_N_** and **_Q_** separated by a space.

The following **_N_** lines contain sequences in this format: "**_k s_0 s_1 s_2 ... s_k-1_**"

The following **_Q_** lines contain queries in this format: "**_a b_**".

## Constraints
**1 <= _N_ <= 10^5**  
**1 <= _Q_ <= 10^5**  
**1 <= _Vk_ <= 3.10^5**  
**_N_ <= Σk <= 3.10^5**  
**0 <= s_i <= 10^6**  
**0 <= Va < _N_**  
**0 <= Vb <** size of the sequence

## Output Format

Output **_Q_** lines, the **_ith_** line contains the answer of the **_ith_** query.

## Sample Input
```
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
```
## Sample Output
```
5
9
```
## Explanation

For the first query, the sequence is **[1, 5, 4]**. Hence, the answer is **5**.

For the second query, the sequence is **[1, 2, 8, 9, 3]**. Hence, the answer is **9**.

**Please note that the problem uses 0-based indexing**