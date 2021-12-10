# Strings
C++ provides a nice alternative data type to manipulate strings, and the data type is conveniently called _string_. Some of its widely used features are the following:

- _Declaration_:
```c++
string a = "abc";
```
- _Size_:
```c++
int len = a.size();
```
- _Concatenate two strings_:
```c++
string a = "abc";
string b = "def";
string c = a + b; // c = "abcdef".
```
- _Accessing ith element_:
```c++
string s = "abc";
char   c0 = s[0];   // c0 = 'a'
char   c1 = s[1];   // c1 = 'b'
char   c2 = s[2];   // c2 = 'c'

s[0] = 'z';         // s = "zbc"
```
_P.S._: We will use _cin/cout_ to read/write a string.

## Input Format

You are given two strings, **_a_** and **_b_**, separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

## Output Format

In the first line print two space-separated integers, representing the length of **_a_** and **_b_** respectively.  
In the second line print the string produced by concatenating **_a_** and **_b_** (**_a_**+**_b_**).  
In the third line print two strings separated by a space, **_a'_** and **_b'_**. **_a'_** and **_b'_** are the same as **_a_** and **_b_**, respectively, except that their first characters are swapped.

## Sample Input
```
abcd
ef
```
## Sample Output
```
4 2
abcdef
ebcd af
```
## Explanation

- **_a_ =** "abcd"
- **_b_ =** "ef"
- **_|a| =_ 4**
- **_|b| =_ 2**
- **_a_ + _b_ =** "abcdef"
- **_a'_ =** "ebcd"
- **_b'_ =** "af"