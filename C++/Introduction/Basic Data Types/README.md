# Basic Data Types
Some C++ data types, their format specifiers, and their most common bit widths are as follows:

- _Int ("%d"):_ 32 Bit integer
- _Long ("%ld"):_ 32 bit integer (same as Int for modern systems)
- _Long Long ("%lld"):_ 64 bit integer
- _Char ("%c"):_ Character type
- _Float ("%f"):_ 32 bit real value
- _Double ("%lf"):_ 64 bit real value
****
## Reading 
To read a data type, use the following syntax:
```C++
scanf("`format_specifier`", &val)
```
For example, to read a _character_ followed by a _double_:
```C++
char ch;
double d;
scanf("%c %lf", &ch, &d);
```
For the moment, we can ignore the spacing between format specifiers.
****
## Printing 
To print a data type, use the following syntax:
```C++
printf("`format_specifier`", val)
```
For example, to print a _character_ followed by a _double_:
```C++
char ch = 'd';
double d = 234.432;
printf("%c %lf", ch, d);
```
**Note:** You can also use _cin_ and _cout_ instead of _scanf_ and _printf_; however, if you are taking a million numbers as input and printing a million lines, it is faster to use _scanf_ and _printf_.

## Input Format

Input consists of the following space-separated values: _int, long, long long, char, float,_ and _double_, respectively.

## Output Format

Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

## Sample Input
```
3 444 12345678912345 a 334.23 14049.30493
```
Sample Output
```
3
444
12345678912345
a
334.23
14049.30493
```
## Explanation

Print _int_ **3**,  
followed by _long_ **444**,  
followed by _long long_ **12345678912345**,  
followed by _char_ **a**,  
followed by _float_ **334.23**,  
followed by _double_ **14049.30493**.