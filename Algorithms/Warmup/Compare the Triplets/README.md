# Compare the Triplets
Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from **1** to **100** for three categories: _problem clarity_, _originality_, and _difficulty_.

We define the rating for Alice's challenge to be the triplet **_A = (a_0, a_1, a_2)_**, and the rating for Bob's challenge to be the triplet **_B = (b_0, b_1, b_2)_**.

Your task is to find their comparison scores by comparing _a_0_ with _b_0_, _a_1_ with _b_1_, and _a_2_ with _b_2_.

- If _a_i_ > _b_i_, then Alice is awarded  point.
- If _a_i_ < _b_i_, then Bob is awarded  point.
- If _a_i_ = _b_i_, then neither person receives a point.  
Given **_A_** and **_B_**, can you compare the two challenges and print their respective comparison points?

## Input Format

The first line contains **_3_** space-separated integers, _a_0_, _a_1_, and _a_2_, describing the respective values in triplet **_A_**.  
The second line contains **_3_** space-separated integers, _b_0_, _b_1_, and _b_2_, describing the respective values in triplet **_B_**.

## Constraints
- **_1 <= a_i <= 100_**
- **_1 <= b_i <= 100_**
## Output Format

Print two space-separated integers denoting the respective comparison scores earned by Alice and Bob.

## Sample Input
```
5 6 7
3 6 10
```
## Sample Output
```
1 1 
```
## Explanation
In this example:
- **_A = (a_0, a_1, a_2) = (5, 6, 7)_**
- **_B = (b_0, b_1, b_2) = (3, 6, 10)_**

Now, let's compare each individual score:

- _a_0_ > _b_0_, so Alice receives **1** point.
- _a_1_ = _b_1_, so nobody receives a point.
- _a_2_ < _b_2_, so Bob receives  point.

Alice's comparison score is **1**, and Bob's comparison score is **1**. Thus, we print `1 1` (Alice's comparison score followed by Bob's comparison score) on a single line.