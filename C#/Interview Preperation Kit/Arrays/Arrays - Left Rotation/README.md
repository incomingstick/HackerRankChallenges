# Arrays: Left Rotation
A left rotation operation on an array shifts each of the array's elements **1** unit to the left. For example, if **2** left rotations are performed on array **[1,2,3,4,5]**, then the array would become **[3,4,5,1,2]**. Note that the lowest index item moves to the highest index in a rotation. This is called a circular array.

Given an array **_a_** of **_n_** integers and a number, **_d_**, perform **_d_** left rotations on the array. Return the updated array to be printed as a single line of space-separated integers.

## Function Description
Complete the function rotLeft in the editor below.

rotLeft has the following parameter(s):

- int a[n]: the array to rotate
- int d: the number of rotations

## Returns
- int a'[n]: the rotated array

## Input Format
The first line contains two space-separated integers **_n_** and **_d_**, the size of **_a_** and the number of left rotations.
The second line contains **_n_** space-separated integers, each an **_a_[_i_]**.

## Constraints 
**1 <= _n_ <= 10^5**

**1 <= _d_ <= _n_**

**1 <= _a_[_i_] <= 10^6**

## Sample Input
```
5 4
1 2 3 4 5
```
## Sample Output
```
5 1 2 3 4
```

## Explanation
When we perform **_d_ = 4** left rotations, the array undergoes the following sequence of changes:

**[1,2,3,4,5] -> [2,3,4,5,1] -> [3,4,5,1,2] -> [4,5,1,2,3] -> [5,1,2,3,4]**
