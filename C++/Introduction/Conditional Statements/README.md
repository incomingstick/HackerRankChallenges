# Conditional Statements
_if_ and _else_ are two of the most heavily used conditionals in C/C++. They are used to execute zero or one statement among many statements.

They can be used in the following three ways.

1. _if_: It is used to execute a statement, given the condition is true.
```C++
if(condition) {
    ...
}
```
2. _if - else_: It is used to execute exactly one of the two statements.
```C++
if(first condition) {
    ...
}
else {
    ...
}
```
3. _if - else if - else_: It is used to execute one of the multiple statements.
```C++
if(first condition) {
    ...
}
else if(second condition) {
    ...
}
.
.
.
else if((n-1)'th condition) {

}
else {
    ...
}
```
****
You are given a positive integer, **_N_**:

- If **1 <= _N_ <= 9**, then print the English representation of it. That is "one" for 1, "two" for 2, and so on.
- Otherwise print "Greater than 9" (without quotes).
## Input Format

Input will contain only one integer, **_N_**.

## Constraints

**1 <= _N_ <= 10^9**

# Output Format

Print the output as described above.

## Sample Input
```
5
```
## Sample Output
```
five
```
## Sample Input #01
```
8
```
## Sample Output #01
```
eight
```
## Sample Input #02
```
44
```
## Sample Output #02
```
Greater than 9
```