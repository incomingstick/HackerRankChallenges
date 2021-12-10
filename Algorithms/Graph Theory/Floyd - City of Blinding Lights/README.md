# Floyd : City of Blinding Lights
Given a directed, weighted graph, consisting of **_N_** nodes and there are edges ,of specified length between some of them in the graph.

Given **_Q_** questions, inquring the shortest distance between a queried pair of nodes in the graph.

Answer all these questions as quickly as possible!

## Input Format

First line has two integers **_N_**, denoting the number of nodes in the graph and **_M_**, denoting the number of edges in the graph.  
The next **_M_** lines each consist of three space separated integers **_x y r_**, where **_x_** and **_y_** denote the two nodes between which the directed edge **(_x -> y_)** exists, **_r_** denotes the length of the edge between the corresponding edges.   
The next line contains a single integer **_Q_**, denoting number of queries.  
The next **_Q_** lines each, contain two space separated integers **_a_** and **_b_**, denoting the node numbers specified according to the question.

## Constraints 
**2 <= _N_ <= 400**  
**1 <= _M_ <= (_N_ x (_N_-1)) / 2**  
**1 <= _Q_ <= 10^5**  
**1 <= _x_, _y_ <= _N_**  
**1 <= _r_ <= 350**  

**If there are edges between the same pair of nodes with different weights, the last one (most recent) is to be considered as the only edge between them.**

## Output Format

Print **_Q_** lines, each containing a single integer, specifying the shortest distance between the nodes specified for that query in the input.

If the distance between a pair of nodes is infinite (not reachable), then print **_-1_** as the shortest distance.

## Sample Input
```
4 5
1 2 5
1 4 24
2 4 6
3 4 4
3 2 7
3
1 2
3 1
1 4
```
## Sample Output
```
5
-1
11
```
## Explanation

The graph given in the test case is shown as:

![Graph](http://drive.google.com/uc?export=download&id=0B_UrJ0h5_x_mcWlYbzRVeEllajQ)

- The nodes A,B,C and D denote the 1,2,3 and 4 node numbers.

The shortest paths for the 3 queries are :

- **A->B** (Direct Path is shortest with weight 5)
- **-1** (There is no way of reaching node 1 from node 3, hence unreachable)
- **A->B->D** (Indirect path is shortest with weight (5+6) = 11 units, the direct path is longer with 24 units length)