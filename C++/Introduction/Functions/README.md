# Functions
Functions are a bunch of statements glued together. A function is provided with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something. 

A sample syntax for a function is
```C++
return_type function_name(arg_type_1 arg_1, arg_type_2 arg_2, ...) {
    ...
    ...
    ...
    [if return_type is non void]
        return something of type `return_type`;
}
```
For example, a function to read four variables and return the sum of them can be written as
```C++
int sum_of_four(int a, int b, int c, int d) {
    int sum = 0;
    sum += a;
    sum += b;
    sum += c;
    sum += d;
    return sum;
}
```
****
You have to write a function int _max_of_four(int a, int b, int c, int d)_ which reads four arguments and returns the greatest of them.

## Input Format

Input will contain four integers - **_a, b, c, d_**, one in each line.

## Output Format

Print the greatest of the four integers. 
_PS:_ I/O will be automatically handled.

## Sample Input
```
3
4
6
5
```
## Sample Output
```
6
```