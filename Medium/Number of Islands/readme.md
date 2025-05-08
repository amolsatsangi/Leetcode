# Number of Islands

## Intuition
The problem asks us to count the number of islands in a grid, where an island is formed by connecting adjacent land cells ('1') horizontally or vertically. This is a classic graph traversal problem where each island can be identified by exploring all connected land cells.

## Approach
1. Use a Breadth-First Search (BFS) approach to explore each island
2. Maintain a visited matrix to keep track of cells we've already processed
3. For each unvisited land cell ('1'), start a BFS to mark the entire island as visited
4. Each time we initiate a BFS, we increment our island counter
5. BFS explores all four adjacent cells (up, down, left, right) and marks them as visited if they are land cells

The BFS ensures that we explore the entire island in one go, and the visited matrix prevents us from counting the same island multiple times.

## Complexity
- Time complexity: **O(M × N)** where M is the number of rows and N is the number of columns in the grid. We visit each cell exactly once.

- Space complexity: **O(M × N)** for the visited matrix. In the worst case, the queue for BFS could also contain all cells, but this is still O(M × N).
