# For Loop
A _for_ loop is a programming language statement which allows code to be repeatedly executed.

The syntax for this is
```C++
for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
```
- _expression_1_ is used for intializing variables which are generally used for controlling terminating flag for the loop.
- _expression_2_ is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
- _expression_3_ is generally used to update the flags/variables.
A sample loop will be
```C++
for(int i = 0; i < 10; i++) {
    ...
}
```
## Input Format

You will be given two positive integers, **_a_** and **_b_** (**_a <= b_**), separated by a newline.

## Output Format

For each integer **_n E[a, b]_** (so all numbers in that range):

- If **1 <= _n_ <= 9**, then print the English representation of it. That is "one" for 1, "two" for 2, and so on.
- Else if **_n_ > 9** and it is even, then print "even".
- Else if **_n_ > 9** and it is odd, then print "odd".

**Note:** **_[a, b]_** represents the interval, i.e., **_[a, b]_ = [a, a+1,..., b-1, b]**

## Sample Input
```
8
11
```
## Sample Output
```
eight
nine
even
odd
```