# Jumping on the Clouds
There is a new mobile game that starts with consecutively numbered clouds. Some of the clouds are thunderheads and others are cumulus. The player can jump on any cumulus cloud having a number that is equal to the number of the current cloud plus **1** or **2**. The player must avoid the thunderheads. Determine the minimum number of jumps it will take to jump from the starting postion to the last cloud. It is always possible to win the game.

For each game, you will get an array of clouds numbered **0** if they are safe or **1** if they must be avoided.

## Example
**_c_ = [0, 1, 0, 0, 0, 0, 0]**

Index the array from **0 ... 6**. The number on each cloud is its index in the list so the player must avoid the clouds at indices **1** and **5**. They could follow these two paths: **1 -> 2 -> 4 -> 6** or **1 -> 2 -> 3 -> 4 -> 6**. The first path takes **3** jumps while the second takes **4**. Return **3**.

## Function Description
Complete the jumpingOnClouds function in the editor below.

jumpingOnClouds has the following parameter(s):

- int c[n]: an array of binary integers

## Returns
- int: the minimum number of jumps required

## Input Format
The first line contains an integer **_n_**, the total number of clouds. The second line contains **_n_** space-separated binary integers describing clouds **_c_[_i_]** where **0 <= _i_ < _n_**.

## Constraints 
**2 <= _n_ <= 100**

**_c_[_i_] E {0,1}**

**_c_[0] = _c_[_n_ - 1] = 0**  

## Output Format

Print the minimum number of jumps needed to win the game.

## Sample Input 0
```
7
0 0 1 0 0 1 0
```
## Sample Output 0
```
4
```

## Explanation 0
The player must avoid **_c_[2]** and **_c_[5]**. The game can be won with a minimum of **4** jumps:

![graph0](https://s3.amazonaws.com/hr-challenge-images/20832/1461134731-c258160d15-jump2.png)

## Sample Input 1
```
6
0 0 0 0 1 0
```
## Sample Output 1
```
3
```

## Explanation 1
The player must avoid **_c_[4]**. The game can be won with a minimum of **3** jumps:

![graph0](https://s3.amazonaws.com/hr-challenge-images/20832/1461136358-764298d363-jump5.png)