# Pointer
A [pointer](https://www.hackerrank.com/external_redirect?to=http://en.wikipedia.org/wiki/Pointer_%28computer_programming%29) in C is a way to share a memory address among different contexts (primarily functions). They are primarily used whenever a function needs to modify the content of a variable, of which it doesn't have ownership. 

In order to access the memory address of a variable, **_val_**, we need to prepend it with **&** sign. E.g., `&val` returns the memory address of **_val_**. 

This memory address is assigned to a pointer and can be shared among various functions. E.g. `int* p = &val` will assign the memory address of **_val_** to pointer **_p_**. To access the content of the memory to which the pointer points, prepend it with a `*`. For example, `*p` will return the value reflected by **_val_** and any modification to it will be reflected at the source (**_val_**).
```C++
void increment(int *v) {
    (*v)++;
}

int main() {
    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
}  
```
****
You have to complete the function _void update(int *a,int *b)_, which reads two integers as argument, and sets **_a_** with the sum of them, and **_b_**  with the absolute difference of them.
- **_a' = a + b_**
- **_b' = |a - b|_**
## Input Format

Input will contain two integers, **_a_** and **_b_**, separated by a newline.

## Output Format

You have to print the updated value of **_a_** and **_b_**, on two different lines.


P.S.: Input/ouput will be automatically handled. You only have to complete the _void update(int *a,int *b)_ function.

## Sample Input
```
4
5
```
## Sample Output
```
9
1
```
## Explanation
- **_a' = 4 + 5_ = 9**
- **_b' = |4 - 5|_ = 1**
