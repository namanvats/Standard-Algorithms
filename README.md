# Depth First Traversal

This program inputs a graph and traverses through it in a depth first manner.
It uses the recursive method to do the operation,In this algorithm it is assumed that the graph is undirected and unweighted.

### Input Format

It takes input the total number of nodes,total edges and the source from where we need to start the traversal in graph.

- First line of input contains nodes(n),edges(e) and source(s).
- Next e lines contains the node-node pair denoting the edge between these two nodes.

### Output Format

A single line which shows traversal of the graph from source node to all connected nodes which are visited.

### Sample Input

`````
7 7 1

1 2
1 6
1 3
2 4
4 5
5 6
3 7
`````

### Sample Output

```
1 2 4 5 6 3 7
```

### Implemented in:
- [C++]
