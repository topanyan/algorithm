# Algorithms
A collection of useful algorithms for competitive programming (ACM-ICPC and Codeforces). All algorithms are implemented in C++. 

Many of them are adapted from [CP Algorithms](https://cp-algorithms.com/index.html) and various [Codeforces](https://codeforces.com/) posts. 

This repository is mainly for personal use. The codes might not be useful to others, but I'll make it public in case anyone needs it. I added my own template and predefined a command to copy the file in my shell, so I can straightly work on these templates during a contest.

## Full List of Algorithms

### Algebra
In directory `algebra/`
- Fraction as pair of integers `frac.cpp`
- Matrix with efficient multiplication and exponentiation `matrix.cpp`
- M&ouml;bius inversion `mobius.cpp`
- Modular number with exponentiation and inverse `modnum.cpp`
- Fast Fourier transform `fft.cpp`
- Testing primality `prime_test.cpp`
- Prime factorization `prime_factorize.cpp`
- Sieve of Eratosthenes `sieve.cpp`

### Geometry
In directory `geometry/`
- Basic geometry operations `basic.cpp`
- Convex Hull `convex_hull.cpp`

### Graph Theory
In directory `graph/`
- Bellman-Ford algorithm with negative cycle detection `bellman_ford.cpp`
- Breadth-first search `bfs.cpp`
- Bridge finding `bridge.cpp`
- Bipartite graph testing with BFS `bipartite.cpp`
- Cycle detection with DFS `cycle.cpp`
- Depth-first search `dfs.cpp`
- Dijkstra's algorithm `dijkstra.cpp`
- Floyd-Warshall algorithm for all sources shortest path `floyd_warshall.cpp`
- Kahn's algorithm for topological sorting `kahn.cpp`
- Kruskal's algorithm for MST construction `kruskal.cpp`
- Lowest common ancestor with binary lifting `lca.cpp`
- Prim's algorithm for MST construction `prim.cpp`
- Topological sorting with DFS `toposort.cpp`
- Union find `union_find.cpp`
- Union find as a struct `union_find_struct.cpp`

### Optimization
In directory `optim/`
- Binary search `binary_search.cpp`
- Dinic's algorithm for max flow `mf.cpp`
- Minimum cost maximum flow `mcmf.cpp`
- Simplex algorithm for linear programming `simplex.cpp`
- Ternary search `ternary_search.cpp`

### String
In directory `string/`
- Aho-Corasick algorithm for string searching `aho_corasick.cpp`
- Knuth-Morris-Pratt (KMP) algorithm for string searching `kmp.cpp`
- Two-pointers general template `two_pointers.cpp`

### Data Structures
In directory `struct/`
- Fenwick tree `fenwick.cpp`
- Range minimum query `rmq.cpp`
- Segment tree with generic query function and assignment query `segtree.cpp`
- Segment tree with range add query and max query `segtree_add.cpp`
- Segment tree with range assignment query and sum query `segtree_range.cpp`
- Splay tree `splay.cpp`
- Treap `treap.cpp`
