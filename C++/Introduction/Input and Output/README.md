# Input and Output
## Objective 
In this challenge, we're practicing reading input from stdin and printing output to stdout.
****
In C++, you can read a single whitespace-separated token of input using [cin](https://www.hackerrank.com/external_redirect?to=http://www.cplusplus.com/cin), and print output to stdout using [cout](https://www.hackerrank.com/external_redirect?to=http://www.cplusplus.com/printf). For example, let's say we declare the following variables:
```C++
string s;
int n;
```
and we want to use cin to read the input "High 5" from stdin. We can do this with the following code:
```C++
cin >> s >> n;
```
The above code reads the first word ("High") from stdin and saves it as string **_s_**, then reads the second word ("**5**") from stdin and saves it as integer **_n_**. If we want to print these values to stdout, we write the following code:
```C++
cout << s << " " << n << endl;
```
The above code prints the contents of string **_s_**, which is the word "High". Then it prints a single space (**" "**), followed by the contents of integer **_n_**. Because we also want to ensure that nothing else is printed on this line, we end our line of output with a newline via [endl](https://www.hackerrank.com/external_redirect?to=http://www.cplusplus.com/endl). This results in the following output:

`High 5`

## Task 
Read **3** numbers from stdin and print their sum to stdout.

**Note:** If you plan on completing this challenge in C instead of C++, you'll need to use format specifiers with _printf_ and _scanf_.

## Input Format

A single line containing **3** space-separated integers: **_a_**, **_b_**, and **_c_**.

## Constraints
- **1 <= _a, b, c_ <= 1000**
## Output Format

Print the sum of the three numbers on a single line.

## Sample Input
```
1 2 7
```
## Sample Output
```
10
```
## Explanation

The sum of the three numbers is **1 + 2 + 7 = 10**.