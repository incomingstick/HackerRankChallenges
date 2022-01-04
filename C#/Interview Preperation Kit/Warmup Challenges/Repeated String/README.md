# Repeated String
There is a string, **_s_**, of lowercase English letters that is repeated infinitely many times. Given an integer, **_n_**, find and print the number of letter a's in the first **_n_** letters of the infinite string.

## Example
**_s_ = 'abcac'**

**_n_ = 10**

The substring we consider is **_abcacabcac_**, the first **10** characters of the infinite string. There are **4** occurrences of **a** in the substring.

## Function Description
Complete the repeatedString function in the editor below.

repeatedString has the following parameter(s):

- s: a string to repeat
- n: the number of characters to consider

## Returns
- int: the frequency of a in the substring

## Input Format
The first line contains a single string, **_s_**.

The second line contains an integer, **_n_**.

## Constraints 
- **1 <= |_s_| <= 100**
- **1 <= _n_ <= 10^12**
- For **_25%_** of the test cases, **_n_ <= 10^6**.

## Sample Input 0
```
aba
10
```
## Sample Output 0
```
7
```

## Explanation 0
The first **_n_ = 10** letters of the infinite string are abaabaabaa. Because there are **7** a's, we return **7**.

## Sample Input 1
```
a
1000000000000
```
## Sample Output 1
```
1000000000000
```

## Explanation 1
Because all of the first **_n_ = 1000000000000** letters of the infinite string are a, we return **1000000000000**.